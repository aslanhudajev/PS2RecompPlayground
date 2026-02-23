#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0010_1
// Address: 0x17fcd0 - 0x17fe00
void IdctColumn_0010_1_0x17fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0010_1");


    ctx->pc = 0x17fcd0u;

    // 0x17fcd0: 0x27bdfff0
    ctx->pc = 0x17fcd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17fcd4: 0x3c18ffff
    ctx->pc = 0x17fcd4u;
    SET_GPR_U32(ctx, 24, ((uint32_t)65535 << 16));
    // 0x17fcd8: 0x3c0f0002
    ctx->pc = 0x17fcd8u;
    SET_GPR_U32(ctx, 15, ((uint32_t)2 << 16));
    // 0x17fcdc: 0x3c0e0001
    ctx->pc = 0x17fcdcu;
    SET_GPR_U32(ctx, 14, ((uint32_t)1 << 16));
    // 0x17fce0: 0x3c0dfffe
    ctx->pc = 0x17fce0u;
    SET_GPR_U32(ctx, 13, ((uint32_t)65534 << 16));
    // 0x17fce4: 0xffb00000
    ctx->pc = 0x17fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fce8: 0x80582d
    ctx->pc = 0x17fce8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcec: 0x24190008
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17fcf0: 0x37183c11
    ctx->pc = 0x17fcf0u;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 24), 15377));
    // 0x17fcf4: 0x35ef9cf6
    ctx->pc = 0x17fcf4u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 40182));
    // 0x17fcf8: 0x35ce6a0a
    ctx->pc = 0x17fcf8u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 27146));
    // 0x17fcfc: 0x35adeae8
    ctx->pc = 0x17fcfcu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 60136));
    // 0x17fd00: 0x10000002
    ctx->pc = 0x17FD00u;
    {
        const bool branch_taken_0x17fd00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FD04u;
        SET_GPR_U32(ctx, 12, ((uint32_t)32 << 16));
        if (branch_taken_0x17fd00) {
            ctx->pc = 0x17FD0Cu;
            goto label_17fd0c;
        }
    }
    ctx->pc = 0x17FD08u;
label_17fd08:
    // 0x17fd08: 0x256b0002
    ctx->pc = 0x17fd08u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17fd0c:
    // 0x17fd0c: 0x85690040
    ctx->pc = 0x17fd0cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x17fd10: 0x2739ffff
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x17fd14: 0x85680050
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x17fd18: 0x856a0010
    ctx->pc = 0x17fd18u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x17fd1c: 0x93400
    ctx->pc = 0x17fd1cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 9), 16));
    // 0x17fd20: 0x85640030
    ctx->pc = 0x17fd20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x17fd24: 0x63823
    ctx->pc = 0x17fd24u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x17fd28: 0x85630070
    ctx->pc = 0x17fd28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 112)));
    // 0x17fd2c: 0x1041023
    ctx->pc = 0x17fd2cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x17fd30: 0x1434821
    ctx->pc = 0x17fd30u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x17fd34: 0x882021
    ctx->pc = 0x17fd34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x17fd38: 0x6a1823
    ctx->pc = 0x17fd38u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x17fd3c: 0x4f4018
    ctx->pc = 0x17fd3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x17fd40: 0x1245023
    ctx->pc = 0x17fd40u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17fd44: 0x431021
    ctx->pc = 0x17fd44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fd48: 0x892021
    ctx->pc = 0x17fd48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17fd4c: 0x6d8018
    ctx->pc = 0x17fd4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x17fd50: 0x70584818
    ctx->pc = 0x17fd50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x17fd54: 0x42400
    ctx->pc = 0x17fd54u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x17fd58: 0x14e5018
    ctx->pc = 0x17fd58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x17fd5c: 0xc42823
    ctx->pc = 0x17fd5cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17fd60: 0xc41021
    ctx->pc = 0x17fd60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17fd64: 0xac2821
    ctx->pc = 0x17fd64u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x17fd68: 0x52d83
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x17fd6c: 0x4c1021
    ctx->pc = 0x17fd6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x17fd70: 0x2091821
    ctx->pc = 0x17fd70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x17fd74: 0x21583
    ctx->pc = 0x17fd74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fd78: 0x641823
    ctx->pc = 0x17fd78u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fd7c: 0x1284021
    ctx->pc = 0x17fd7cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x17fd80: 0x1435023
    ctx->pc = 0x17fd80u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x17fd84: 0xa5650070
    ctx->pc = 0x17fd84u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 112), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fd88: 0xe32823
    ctx->pc = 0x17fd88u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17fd8c: 0x10a4023
    ctx->pc = 0x17fd8cu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x17fd90: 0xa5620000
    ctx->pc = 0x17fd90u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fd94: 0xea2023
    ctx->pc = 0x17fd94u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x17fd98: 0xc81023
    ctx->pc = 0x17fd98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x17fd9c: 0xe31821
    ctx->pc = 0x17fd9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17fda0: 0xea3821
    ctx->pc = 0x17fda0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x17fda4: 0xc83021
    ctx->pc = 0x17fda4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x17fda8: 0x6c1821
    ctx->pc = 0x17fda8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x17fdac: 0xec3821
    ctx->pc = 0x17fdacu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x17fdb0: 0xcc3021
    ctx->pc = 0x17fdb0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x17fdb4: 0x4c1021
    ctx->pc = 0x17fdb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x17fdb8: 0x8c2021
    ctx->pc = 0x17fdb8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x17fdbc: 0xac2821
    ctx->pc = 0x17fdbcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x17fdc0: 0x31d83
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fdc4: 0x73d83
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 22));
    // 0x17fdc8: 0x63583
    ctx->pc = 0x17fdc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x17fdcc: 0x21583
    ctx->pc = 0x17fdccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fdd0: 0x42583
    ctx->pc = 0x17fdd0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fdd4: 0x52d83
    ctx->pc = 0x17fdd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x17fdd8: 0xa5630010
    ctx->pc = 0x17fdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fddc: 0xa5670020
    ctx->pc = 0x17fddcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fde0: 0xa5660030
    ctx->pc = 0x17fde0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x17fde4: 0xa5620040
    ctx->pc = 0x17fde4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fde8: 0xa5640050
    ctx->pc = 0x17fde8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x17fdec: 0x1720ffc6
    ctx->pc = 0x17FDECu;
    {
        const bool branch_taken_0x17fdec = (GPR_U32(ctx, 25) != GPR_U32(ctx, 0));
        ctx->pc = 0x17FDF0u;
        WRITE16(ADD32(GPR_U32(ctx, 11), 96), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x17fdec) {
            ctx->pc = 0x17FD08u;
            goto label_17fd08;
        }
    }
    ctx->pc = 0x17FDF4u;
    // 0x17fdf4: 0xdfb00000
    ctx->pc = 0x17fdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdf8: 0x3e00008
    ctx->pc = 0x17FDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FDFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FD08u: goto label_17fd08;
            case 0x17FD0Cu: goto label_17fd0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FE00u;
}
