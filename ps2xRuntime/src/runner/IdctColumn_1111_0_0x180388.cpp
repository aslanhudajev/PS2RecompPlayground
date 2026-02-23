#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_1111_0
// Address: 0x180388 - 0x180438
void IdctColumn_1111_0_0x180388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_1111_0");


    ctx->pc = 0x180388u;

    // 0x180388: 0x3c0a0001
    ctx->pc = 0x180388u;
    SET_GPR_U32(ctx, 10, ((uint32_t)1 << 16));
    // 0x18038c: 0x80382d
    ctx->pc = 0x18038cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180390: 0x240b0008
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 8));
    // 0x180394: 0x354a6a0a
    ctx->pc = 0x180394u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 27146));
    // 0x180398: 0x10000002
    ctx->pc = 0x180398u;
    {
        const bool branch_taken_0x180398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18039Cu;
        SET_GPR_U32(ctx, 9, ((uint32_t)32 << 16));
        if (branch_taken_0x180398) {
            ctx->pc = 0x1803A4u;
            goto label_1803a4;
        }
    }
    ctx->pc = 0x1803A0u;
label_1803a0:
    // 0x1803a0: 0x24e70002
    ctx->pc = 0x1803a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_1803a4:
    // 0x1803a4: 0x84e60020
    ctx->pc = 0x1803a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1803a8: 0x256bffff
    ctx->pc = 0x1803a8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1803ac: 0x84e50060
    ctx->pc = 0x1803acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1803b0: 0x84e40000
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1803b4: 0xa61023
    ctx->pc = 0x1803b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1803b8: 0x84e80040
    ctx->pc = 0x1803b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1803bc: 0xa62821
    ctx->pc = 0x1803bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1803c0: 0x42400
    ctx->pc = 0x1803c0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1803c4: 0x4a3018
    ctx->pc = 0x1803c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x1803c8: 0x51c00
    ctx->pc = 0x1803c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1803cc: 0x81400
    ctx->pc = 0x1803ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1803d0: 0x444023
    ctx->pc = 0x1803d0u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1803d4: 0x821021
    ctx->pc = 0x1803d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1803d8: 0x432823
    ctx->pc = 0x1803d8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1803dc: 0x432021
    ctx->pc = 0x1803dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1803e0: 0xc33021
    ctx->pc = 0x1803e0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1803e4: 0x892021
    ctx->pc = 0x1803e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1803e8: 0x1061021
    ctx->pc = 0x1803e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1803ec: 0xa92821
    ctx->pc = 0x1803ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1803f0: 0xc83023
    ctx->pc = 0x1803f0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1803f4: 0x1221023
    ctx->pc = 0x1803f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1803f8: 0xc91821
    ctx->pc = 0x1803f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1803fc: 0x42583
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x180400: 0x21583
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180404: 0x33583
    ctx->pc = 0x180404u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 22));
    // 0x180408: 0x52d83
    ctx->pc = 0x180408u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x18040c: 0xa4e40070
    ctx->pc = 0x18040cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 112), (uint16_t)GPR_U32(ctx, 4));
    // 0x180410: 0xa4e20060
    ctx->pc = 0x180410u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x180414: 0xa4e60050
    ctx->pc = 0x180414u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 80), (uint16_t)GPR_U32(ctx, 6));
    // 0x180418: 0xa4e50040
    ctx->pc = 0x180418u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x18041c: 0xa4e40000
    ctx->pc = 0x18041cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x180420: 0xa4e20010
    ctx->pc = 0x180420u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x180424: 0xa4e60020
    ctx->pc = 0x180424u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x180428: 0x1560ffdd
    ctx->pc = 0x180428u;
    {
        const bool branch_taken_0x180428 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        ctx->pc = 0x18042Cu;
        WRITE16(ADD32(GPR_U32(ctx, 7), 48), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x180428) {
            ctx->pc = 0x1803A0u;
            goto label_1803a0;
        }
    }
    ctx->pc = 0x180430u;
    // 0x180430: 0x3e00008
    ctx->pc = 0x180430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1803A0u: goto label_1803a0;
            case 0x1803A4u: goto label_1803a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180438u;
}
