#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_1000_1
// Address: 0x1800b0 - 0x1801d0
void IdctColumn_1000_1_0x1800b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_1000_1");


    ctx->pc = 0x1800b0u;

    // 0x1800b0: 0x3c18ffff
    ctx->pc = 0x1800b0u;
    SET_GPR_U32(ctx, 24, ((uint32_t)65535 << 16));
    // 0x1800b4: 0x3c0f0002
    ctx->pc = 0x1800b4u;
    SET_GPR_U32(ctx, 15, ((uint32_t)2 << 16));
    // 0x1800b8: 0x3c0e0001
    ctx->pc = 0x1800b8u;
    SET_GPR_U32(ctx, 14, ((uint32_t)1 << 16));
    // 0x1800bc: 0x3c0dfffe
    ctx->pc = 0x1800bcu;
    SET_GPR_U32(ctx, 13, ((uint32_t)65534 << 16));
    // 0x1800c0: 0x80582d
    ctx->pc = 0x1800c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800c4: 0x24190008
    ctx->pc = 0x1800c4u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1800c8: 0x37183c11
    ctx->pc = 0x1800c8u;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 24), 15377));
    // 0x1800cc: 0x35ef9cf6
    ctx->pc = 0x1800ccu;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 40182));
    // 0x1800d0: 0x35ce6a0a
    ctx->pc = 0x1800d0u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 27146));
    // 0x1800d4: 0x35adeae8
    ctx->pc = 0x1800d4u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 60136));
    // 0x1800d8: 0x10000002
    ctx->pc = 0x1800D8u;
    {
        const bool branch_taken_0x1800d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1800DCu;
        SET_GPR_U32(ctx, 12, ((uint32_t)32 << 16));
        if (branch_taken_0x1800d8) {
            ctx->pc = 0x1800E4u;
            goto label_1800e4;
        }
    }
    ctx->pc = 0x1800E0u;
label_1800e0:
    // 0x1800e0: 0x256b0002
    ctx->pc = 0x1800e0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_1800e4:
    // 0x1800e4: 0x85680050
    ctx->pc = 0x1800e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1800e8: 0x2739ffff
    ctx->pc = 0x1800e8u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x1800ec: 0x85690010
    ctx->pc = 0x1800ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1800f0: 0x85650030
    ctx->pc = 0x1800f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x1800f4: 0x85630070
    ctx->pc = 0x1800f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 112)));
    // 0x1800f8: 0x1051023
    ctx->pc = 0x1800f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1800fc: 0x85660000
    ctx->pc = 0x1800fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x180100: 0x1235021
    ctx->pc = 0x180100u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x180104: 0xa82821
    ctx->pc = 0x180104u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x180108: 0x691823
    ctx->pc = 0x180108u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18010c: 0x4f3818
    ctx->pc = 0x18010cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x180110: 0x1454823
    ctx->pc = 0x180110u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x180114: 0x431021
    ctx->pc = 0x180114u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180118: 0xaa2821
    ctx->pc = 0x180118u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x18011c: 0x6d4018
    ctx->pc = 0x18011cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x180120: 0x70585018
    ctx->pc = 0x180120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x180124: 0x63400
    ctx->pc = 0x180124u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x180128: 0x12e4818
    ctx->pc = 0x180128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x18012c: 0x52c00
    ctx->pc = 0x18012cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x180130: 0xc52023
    ctx->pc = 0x180130u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x180134: 0xc51021
    ctx->pc = 0x180134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x180138: 0x4c1021
    ctx->pc = 0x180138u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x18013c: 0x8c2021
    ctx->pc = 0x18013cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x180140: 0x10a1821
    ctx->pc = 0x180140u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x180144: 0x21583
    ctx->pc = 0x180144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180148: 0x651823
    ctx->pc = 0x180148u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18014c: 0x1474021
    ctx->pc = 0x18014cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x180150: 0x1234823
    ctx->pc = 0x180150u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x180154: 0x42583
    ctx->pc = 0x180154u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x180158: 0xc33823
    ctx->pc = 0x180158u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18015c: 0x1094023
    ctx->pc = 0x18015cu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x180160: 0xa5620000
    ctx->pc = 0x180160u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x180164: 0xc92823
    ctx->pc = 0x180164u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x180168: 0xa5640070
    ctx->pc = 0x180168u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 112), (uint16_t)GPR_U32(ctx, 4));
    // 0x18016c: 0xc31821
    ctx->pc = 0x18016cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180170: 0xc82023
    ctx->pc = 0x180170u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x180174: 0xc91021
    ctx->pc = 0x180174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x180178: 0xc83021
    ctx->pc = 0x180178u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x18017c: 0x6c1821
    ctx->pc = 0x18017cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x180180: 0x4c1021
    ctx->pc = 0x180180u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x180184: 0xcc3021
    ctx->pc = 0x180184u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x180188: 0x8c2021
    ctx->pc = 0x180188u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x18018c: 0xac2821
    ctx->pc = 0x18018cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x180190: 0xec3821
    ctx->pc = 0x180190u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x180194: 0x31d83
    ctx->pc = 0x180194u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x180198: 0x21583
    ctx->pc = 0x180198u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x18019c: 0x63583
    ctx->pc = 0x18019cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x1801a0: 0x42583
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x1801a4: 0x52d83
    ctx->pc = 0x1801a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x1801a8: 0x73d83
    ctx->pc = 0x1801a8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 22));
    // 0x1801ac: 0xa5630010
    ctx->pc = 0x1801acu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1801b0: 0xa5620020
    ctx->pc = 0x1801b0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1801b4: 0xa5660030
    ctx->pc = 0x1801b4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x1801b8: 0xa5640040
    ctx->pc = 0x1801b8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x1801bc: 0xa5650050
    ctx->pc = 0x1801bcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x1801c0: 0x1720ffc7
    ctx->pc = 0x1801C0u;
    {
        const bool branch_taken_0x1801c0 = (GPR_U32(ctx, 25) != GPR_U32(ctx, 0));
        ctx->pc = 0x1801C4u;
        WRITE16(ADD32(GPR_U32(ctx, 11), 96), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x1801c0) {
            ctx->pc = 0x1800E0u;
            goto label_1800e0;
        }
    }
    ctx->pc = 0x1801C8u;
    // 0x1801c8: 0x3e00008
    ctx->pc = 0x1801C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1800E0u: goto label_1800e0;
            case 0x1800E4u: goto label_1800e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1801D0u;
}
