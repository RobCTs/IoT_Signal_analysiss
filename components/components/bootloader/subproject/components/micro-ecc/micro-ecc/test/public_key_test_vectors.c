/* Copyright 2020, Kenneth MacKay. Licensed under the BSD 2-clause license. */

#include "uECC.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  const char* k;
  const char* Q;
  int success;
} Test;

Test secp160r1_tests[] = {
    /* Note, I couldn't find any test vectors for secp160r1 online, so these are just
       generated on my desktop using uECC. */
    {
        "000000000000000000000000000000000000000000",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {
        "000000000000000000000000000000000000000001",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {
        "000000000000000000000000000000000000000002",
        "02F997F33C5ED04C55D3EDF8675D3E92E8F46686F083A323482993E9440E817E21CFB7737DF8797B",
        1
    },
    {
        "000000000000000000000000000000000000000003",
        "7B76FF541EF363F2DF13DE1650BD48DAA958BC59C915CA790D8C8877B55BE0079D12854FFE9F6F5A",
        1
    },
    {   /* n - 4 */
        "0100000000000000000001F4C8F927AED3CA752253",
        "B4041D8683BE99F0AFE01C307B1AD4C100CF2A88C0CD35127BE0F73FF99F338B350B5A42864112F7",
        1
    },
    {   /* n - 3 */
        "0100000000000000000001F4C8F927AED3CA752254",
        "7B76FF541EF363F2DF13DE1650BD48DAA958BC5936EA3586F27377884AA41FF862ED7AAF816090A5",
        1
    },
    {   /* n - 2 */
        "0100000000000000000001F4C8F927AED3CA752255",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {   /* n - 1 */
        "0100000000000000000001F4C8F927AED3CA752256",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {   /* n */
        "0100000000000000000001F4C8F927AED3CA752257",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
};


Test secp192r1_tests[] = {
    {
        "000000000000000000000000000000000000000000000000",
        "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {
        "000000000000000000000000000000000000000000000001",
        "188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF101207192B95FFC8DA78631011ED6B24CDD573F977A11E794811",
        0
    },
    {
        "000000000000000000000000000000000000000000000002",
        "DAFEBF5828783F2AD35534631588A3F629A70FB16982A888DD6BDA0D993DA0FA46B27BBC141B868F59331AFA5C7E93AB",
        1
    },
    {
        "000000000000000000000000000000000000000000000003",
        "76E32A2557599E6EDCD283201FB2B9AADFD0D359CBB263DA782C37E372BA4520AA62E0FED121D49EF3B543660CFD05FD",
        1
    },
    {   /* n - 4 */
        "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D2282D",
        "35433907297CC378B0015703374729D7A4FE46647084E4BA5D9B667B0DECA3CFE15C534F88932B0DDAC764CEE24C41CD",
        1
    },
    {   /* n - 3 */
        "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D2282E",
        "76E32A2557599E6EDCD283201FB2B9AADFD0D359CBB263DA87D3C81C8D45BADF559D1F012EDE2B600C4ABC99F302FA02",
        1
    },
    {   /* n - 2 */
        "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D2282F",
        "DAFEBF5828783F2AD35534631588A3F629A70FB16982A888229425F266C25F05B94D8443EBE4796FA6CCE505A3816C54",
        0
    },
    {   /* n - 1 */
        "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D22830",
        "188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF1012F8E6D46A003725879CEFEE1294DB32298C06885EE186B7EE",
        0
    },
    {   /* n */
        "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D22831",
        "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
};

Test secp224r1_tests[] = {
    {
        "00000000000000000000000000000000000000000000000000000000",
        "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {
        "00000000000000000000000000000000000000000000000000000001",
        "B70E0CBD6BB4BF7F321390B94A03C1D356C21122343280D6115C1D21BD376388B5F723FB4C22DFE6CD4375A05A07476444D5819985007E34",
        0
    },
    {
        "00000000000000000000000000000000000000000000000000000002",
        "706A46DC76DCB76798E60E6D89474788D16DC18032D268FD1A704FA61C2B76A7BC25E7702A704FA986892849FCA629487ACF3709D2E4E8BB",
        1
    },
    {
        "00000000000000000000000000000000000000000000000000000003",
        "DF1B1D66A551D0D31EFF822558B9D2CC75C2180279FE0D08FD896D04A3F7F03CADD0BE444C0AA56830130DDF77D317344E1AF3591981A925",
        1
    },
    {   /* n - 4 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A39",
        "AE99FEEBB5D26945B54892092A8AEE02912930FA41CD114E40447301FB7DA7F5F13A43B81774373C879CD32D6934C05FA758EEB14FCFAB38",
        1
    },
    {   /* n - 3 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A3A",
        "DF1B1D66A551D0D31EFF822558B9D2CC75C2180279FE0D08FD896D045C080FC3522F41BBB3F55A97CFECF21F882CE8CBB1E50CA6E67E56DC",
        1
    },
    {   /* n - 2 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A3B",
        "706A46DC76DCB76798E60E6D89474788D16DC18032D268FD1A704FA6E3D4895843DA188FD58FB0567976D7B50359D6B78530C8F62D1B1746",
        0
    },
    {   /* n - 1 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A3C",
        "B70E0CBD6BB4BF7F321390B94A03C1D356C21122343280D6115C1D2142C89C774A08DC04B3DD201932BC8A5EA5F8B89BBB2A7E667AFF81CD",
        0
    },
    {   /* n */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A3D",
        "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
};

Test secp256r1_tests[] = {
    {
        "0000000000000000000000000000000000000000000000000000000000000000",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {
        "0000000000000000000000000000000000000000000000000000000000000001",
        "6B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C2964FE342E2FE1A7F9B8EE7EB4A7C0F9E162BCE33576B315ECECBB6406837BF51F5",
        0
    },
    {
        "0000000000000000000000000000000000000000000000000000000000000002",
        "7CF27B188D034F7E8A52380304B51AC3C08969E277F21B35A60B48FC4766997807775510DB8ED040293D9AC69F7430DBBA7DADE63CE982299E04B79D227873D1",
        1
    },
    {
        "0000000000000000000000000000000000000000000000000000000000000003",
        "5ECBE4D1A6330A44C8F7EF951D4BF165E6C6B721EFADA985FB41661BC6E7FD6C8734640C4998FF7E374B06CE1A64A2ECD82AB036384FB83D9A79B127A27D5032",
        1
    },
    {   /* n - 4 */
        "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC63254D",
        "E2534A3532D08FBBA02DDE659EE62BD0031FE2DB785596EF509302446B0308521F0EA8A4B39CC339E62011A02579D289B103693D0CF11FFAA3BD3DC0E7B12739",
        1
    },
    {   /* n - 3 */
        "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC63254E",
        "5ECBE4D1A6330A44C8F7EF951D4BF165E6C6B721EFADA985FB41661BC6E7FD6C78CB9BF2B6670082C8B4F931E59B5D1327D54FCAC7B047C265864ED85D82AFCD",
        1
    },
    {   /* n - 2 */
        "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC63254F",
        "7CF27B188D034F7E8A52380304B51AC3C08969E277F21B35A60B48FC47669978F888AAEE24712FC0D6C26539608BCF244582521AC3167DD661FB4862DD878C2E",
        0
    },
    {   /* n - 1 */
        "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632550",
        "6B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296B01CBD1C01E58065711814B583F061E9D431CCA994CEA1313449BF97C840AE0A",
        0
    },
    {   /* n */
        "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
};

Test secp256k1_tests[] = {
    {
        "0000000000000000000000000000000000000000000000000000000000000000",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
    {
        "0000000000000000000000000000000000000000000000000000000000000001",
        "79BE667EF9DCBBAC55A06295CE870B07029BFCDB2DCE28D959F2815B16F81798483ADA7726A3C4655DA4FBFC0E1108A8FD17B448A68554199C47D08FFB10D4B8",
        0
    },
    {
        "0000000000000000000000000000000000000000000000000000000000000002",
        "C6047F9441ED7D6D3045406E95C07CD85C778E4B8CEF3CA7ABAC09B95C709EE51AE168FEA63DC339A3C58419466CEAEEF7F632653266D0E1236431A950CFE52A",
        1
    },
    {
        "0000000000000000000000000000000000000000000000000000000000000003",
        "F9308A019258C31049344F85F89D5229B531C845836F99B08601F113BCE036F9388F7B0F632DE8140FE337E62A37F3566500A99934C2231B6CB9FD7584B8E672",
        1
    },
    {   /* n - 4 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD036413D",
        "E493DBF1C10D80F3581E4904930B1404CC6C13900EE0758474FA94ABE8C4CD13AE1266C15F2BAA48A9BD1DF6715AEBB7269851CC404201BF30168422B88C630D",
        1
    },
    {   /* n - 3 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD036413E",
        "F9308A019258C31049344F85F89D5229B531C845836F99B08601F113BCE036F9C77084F09CD217EBF01CC819D5C80CA99AFF5666CB3DDCE4934602897B4715BD",
        1
    },
    {   /* n - 2 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD036413F",
        "C6047F9441ED7D6D3045406E95C07CD85C778E4B8CEF3CA7ABAC09B95C709EE5E51E970159C23CC65C3A7BE6B99315110809CD9ACD992F1EDC9BCE55AF301705",
        0
    },
    {   /* n - 1 */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD0364140",
        "79BE667EF9DCBBAC55A06295CE870B07029BFCDB2DCE28D959F2815B16F81798B7C52588D95C3B9AA25B0403F1EEF75702E84BB7597AABE663B82F6F04EF2777",
        0
    },
    {   /* n */
        "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD0364141",
        "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        0
    },
};


void vli_print(uint8_t *vli, unsigned int size) {
    for(unsigned i=0; i<size; ++i) {
        printf("%02X ", (unsigned)vli[i]);
    }
    printf("\n");
}

void strtobytes(const char* str, uint8_t* bytes, int count) {
  for (int c = 0; c < count; ++c) {
    if (sscanf(str, "%2hhx", &bytes[c]) != 1) {
      printf("Failed to read string to bytes");
      exit(1);
    }
    str += 2;
  }
}

int run(Test* tests, int num_tests, uECC_Curve curve) {
    uint8_t private[32] = {0};
    uint8_t public[64] = {0};
    uint8_t expected[64] = {0};
    int result;
    int i;
    int private_key_size;
    int public_key_size;
    int all_success = 1;

    private_key_size = uECC_curve_private_key_size(curve);
    public_key_size = uECC_curve_public_key_size(curve);

    for (i = 0; i < num_tests; ++i) {
        strtobytes(tests[i].k, private, private_key_size);
        result = uECC_compute_public_key(private, public, curve);
        if (result != tests[i].success) {
            all_success = 0;
            printf("  Got unexpected result from test %d: %d\n", i, result);
        }
        if (result) {
            strtobytes(tests[i].Q, expected, public_key_size);
            if (memcmp(public, expected, public_key_size) != 0) {
                all_success = 0;
                printf("  Got incorrect public key for test %d\n", i);
                printf("    Expected: ");
                vli_print(expected, public_key_size);
                printf("    Calculated: ");
                vli_print(public, public_key_size);
            }
        }
    }

    return all_success;
}

#define RUN_TESTS(curve) \
    printf(#curve ":\n"); \
    if (run(curve##_tests, sizeof(curve##_tests) / sizeof(curve##_tests[0]), uECC_##curve()) ) { \
        printf("  All passed\n"); \
    } else { \
        printf("  Failed\n"); \
    }

int main() {
#if uECC_SUPPORTS_secp160r1
    RUN_TESTS(secp160r1)
#endif
#if uECC_SUPPORTS_secp192r1
    RUN_TESTS(secp192r1)
#endif
#if uECC_SUPPORTS_secp224r1
    RUN_TESTS(secp224r1)
#endif
#if uECC_SUPPORTS_secp256r1
    RUN_TESTS(secp256r1)
#endif
#if uECC_SUPPORTS_secp256k1
    RUN_TESTS(secp256k1)
#endif

    return 0;
}
