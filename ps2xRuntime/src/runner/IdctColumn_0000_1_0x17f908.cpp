#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0000_1
// Address: 0x17f908 - 0x17fa00
void IdctColumn_0000_1_0x17f908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0000_1");


    ctx->pc = 0x17f908u;

    // 0x17f908: 0x3c0fffff
    ctx->pc = 0x17f908u;
    SET_GPR_U32(ctx, 15, ((uint32_t)65535 << 16));
    // 0x17f90c: 0x3c0e0002
    ctx->pc = 0x17f90cu;
    SET_GPR_U32(ctx, 14, ((uint32_t)2 << 16));
    // 0x17f910: 0x3c0d0001
    ctx->pc = 0x17f910u;
    SET_GPR_U32(ctx, 13, ((uint32_t)1 << 16));
    // 0x17f914: 0x3c0cfffe
    ctx->pc = 0x17f914u;
    SET_GPR_U32(ctx, 12, ((uint32_t)65534 << 16));
    // 0x17f918: 0x80502d
    ctx->pc = 0x17f918u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f91c: 0x24180008
    ctx->pc = 0x17f91cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17f920: 0x35ef3c11
    ctx->pc = 0x17f920u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 15377));
    // 0x17f924: 0x35ce9cf6
    ctx->pc = 0x17f924u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 40182));
    // 0x17f928: 0x35ad6a0a
    ctx->pc = 0x17f928u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 27146));
    // 0x17f92c: 0x358ceae8
    ctx->pc = 0x17f92cu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), 60136));
    // 0x17f930: 0x10000002
    ctx->pc = 0x17F930u;
    {
        const bool branch_taken_0x17f930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F934u;
        SET_GPR_U32(ctx, 11, ((uint32_t)32 << 16));
        if (branch_taken_0x17f930) {
            ctx->pc = 0x17F93Cu;
            goto label_17f93c;
        }
    }
    ctx->pc = 0x17F938u;
label_17f938:
    // 0x17f938: 0x254a0002
    ctx->pc = 0x17f938u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
label_17f93c:
    // 0x17f93c: 0x85490010
    ctx->pc = 0x17f93cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x17f940: 0x2718ffff
    ctx->pc = 0x17f940u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x17f944: 0x85480050
    ctx->pc = 0x17f944u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x17f948: 0x85430030
    ctx->pc = 0x17f948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x17f94c: 0x85440070
    ctx->pc = 0x17f94cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x17f950: 0x1031023
    ctx->pc = 0x17f950u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17f954: 0x1243821
    ctx->pc = 0x17f954u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17f958: 0x681821
    ctx->pc = 0x17f958u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x17f95c: 0x892023
    ctx->pc = 0x17f95cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17f960: 0x4e3018
    ctx->pc = 0x17f960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x17f964: 0xe34823
    ctx->pc = 0x17f964u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17f968: 0x441021
    ctx->pc = 0x17f968u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f96c: 0x671821
    ctx->pc = 0x17f96cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17f970: 0x12d4818
    ctx->pc = 0x17f970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x17f974: 0x704f3818
    ctx->pc = 0x17f974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x17f978: 0x31c00
    ctx->pc = 0x17f978u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x17f97c: 0x6b1021
    ctx->pc = 0x17f97cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x17f980: 0x1632823
    ctx->pc = 0x17f980u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x17f984: 0x21583
    ctx->pc = 0x17f984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17f988: 0x52d83
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x17f98c: 0xa5420000
    ctx->pc = 0x17f98cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f990: 0x8c1018
    ctx->pc = 0x17f990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17f994: 0xe64021
    ctx->pc = 0x17f994u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x17f998: 0xa5450070
    ctx->pc = 0x17f998u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 112), (uint16_t)GPR_U32(ctx, 5));
    // 0x17f99c: 0x472021
    ctx->pc = 0x17f99cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17f9a0: 0x832023
    ctx->pc = 0x17f9a0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17f9a4: 0x1244823
    ctx->pc = 0x17f9a4u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17f9a8: 0x1643823
    ctx->pc = 0x17f9a8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x17f9ac: 0x1094023
    ctx->pc = 0x17f9acu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x17f9b0: 0x1693023
    ctx->pc = 0x17f9b0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x17f9b4: 0x1682823
    ctx->pc = 0x17f9b4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x17f9b8: 0x8b2021
    ctx->pc = 0x17f9b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x17f9bc: 0x12b1021
    ctx->pc = 0x17f9bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x17f9c0: 0x10b1821
    ctx->pc = 0x17f9c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x17f9c4: 0x42583
    ctx->pc = 0x17f9c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17f9c8: 0x21583
    ctx->pc = 0x17f9c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17f9cc: 0x31d83
    ctx->pc = 0x17f9ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17f9d0: 0x52d83
    ctx->pc = 0x17f9d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x17f9d4: 0x63583
    ctx->pc = 0x17f9d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x17f9d8: 0x73d83
    ctx->pc = 0x17f9d8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 22));
    // 0x17f9dc: 0xa5440010
    ctx->pc = 0x17f9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x17f9e0: 0xa5420020
    ctx->pc = 0x17f9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f9e4: 0xa5430030
    ctx->pc = 0x17f9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f9e8: 0xa5450040
    ctx->pc = 0x17f9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x17f9ec: 0xa5460050
    ctx->pc = 0x17f9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 80), (uint16_t)GPR_U32(ctx, 6));
    // 0x17f9f0: 0x1700ffd1
    ctx->pc = 0x17F9F0u;
    {
        const bool branch_taken_0x17f9f0 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 0));
        ctx->pc = 0x17F9F4u;
        WRITE16(ADD32(GPR_U32(ctx, 10), 96), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x17f9f0) {
            ctx->pc = 0x17F938u;
            goto label_17f938;
        }
    }
    ctx->pc = 0x17F9F8u;
    // 0x17f9f8: 0x3e00008
    ctx->pc = 0x17F9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F938u: goto label_17f938;
            case 0x17F93Cu: goto label_17f93c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FA00u;
}
