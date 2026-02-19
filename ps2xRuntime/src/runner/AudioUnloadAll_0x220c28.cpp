#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioUnloadAll
// Address: 0x220c28 - 0x220cec
void AudioUnloadAll_0x220c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220c28u;

    // 0x220c28: 0x3c020032
    ctx->pc = 0x220c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220c2c: 0x8c42fd58
    ctx->pc = 0x220c2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x220c30: 0x1440002c
    ctx->pc = 0x220C30u;
    {
        const bool branch_taken_0x220c30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220C34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220c30) {
            ctx->pc = 0x220CE4u;
            goto label_220ce4;
        }
    }
    ctx->pc = 0x220C38u;
    // 0x220c38: 0x8c42fe28
    ctx->pc = 0x220c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966824)));
    // 0x220c3c: 0x8c420010
    ctx->pc = 0x220c3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220c40: 0x18400012
    ctx->pc = 0x220C40u;
    {
        const bool branch_taken_0x220c40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x220C44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x220c40) {
            ctx->pc = 0x220C8Cu;
            goto label_220c8c;
        }
    }
    ctx->pc = 0x220C48u;
    // 0x220c48: 0x3c020032
    ctx->pc = 0x220c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220c4c: 0x8c45fe28
    ctx->pc = 0x220c4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966824)));
    // 0x220c50: 0x24090124
    ctx->pc = 0x220c50u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 292));
    // 0x220c54: 0x24a80130
    ctx->pc = 0x220c54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 304));
    // 0x220c58: 0x2406ffff
    ctx->pc = 0x220c58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220c5c: 0x24a70134
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 308));
    // 0x220c60: 0x891818
    ctx->pc = 0x220c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220c64: 0x0
    ctx->pc = 0x220c64u;
    // NOP
label_220c68:
    // 0x220c68: 0x1031021
    ctx->pc = 0x220c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x220c6c: 0xac460000
    ctx->pc = 0x220c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x220c70: 0xe31821
    ctx->pc = 0x220c70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x220c74: 0xac660000
    ctx->pc = 0x220c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x220c78: 0x24840001
    ctx->pc = 0x220c78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x220c7c: 0x8ca20010
    ctx->pc = 0x220c7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x220c80: 0x82102a
    ctx->pc = 0x220c80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x220c84: 0x1440fff8
    ctx->pc = 0x220C84u;
    {
        const bool branch_taken_0x220c84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220C88u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x220c84) {
            ctx->pc = 0x220C68u;
            goto label_220c68;
        }
    }
    ctx->pc = 0x220C8Cu;
label_220c8c:
    // 0x220c8c: 0x3c020032
    ctx->pc = 0x220c8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220c90: 0x8c42fd6c
    ctx->pc = 0x220c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x220c94: 0x8c420004
    ctx->pc = 0x220c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x220c98: 0x18400010
    ctx->pc = 0x220C98u;
    {
        const bool branch_taken_0x220c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x220C9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x220c98) {
            ctx->pc = 0x220CDCu;
            goto label_220cdc;
        }
    }
    ctx->pc = 0x220CA0u;
    // 0x220ca0: 0x3c020032
    ctx->pc = 0x220ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220ca4: 0x8c45fd6c
    ctx->pc = 0x220ca4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x220ca8: 0x2406002c
    ctx->pc = 0x220ca8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 44));
    // 0x220cac: 0x8ca20010
    ctx->pc = 0x220cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_220cb0:
    // 0x220cb0: 0x861818
    ctx->pc = 0x220cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220cb4: 0x621021
    ctx->pc = 0x220cb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220cb8: 0xa4400028
    ctx->pc = 0x220cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x220cbc: 0x8ca20010
    ctx->pc = 0x220cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x220cc0: 0x621821
    ctx->pc = 0x220cc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220cc4: 0xa460002a
    ctx->pc = 0x220cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x220cc8: 0x24840001
    ctx->pc = 0x220cc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x220ccc: 0x8ca20004
    ctx->pc = 0x220cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x220cd0: 0x82102a
    ctx->pc = 0x220cd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x220cd4: 0x5440fff6
    ctx->pc = 0x220CD4u;
    {
        const bool branch_taken_0x220cd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x220cd4) {
            ctx->pc = 0x220CD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->pc = 0x220CB0u;
            goto label_220cb0;
        }
    }
    ctx->pc = 0x220CDCu;
label_220cdc:
    // 0x220cdc: 0x8088ed0
    ctx->pc = 0x220CDCu;
    ctx->pc = 0x223B40u;
    aud_flush_banks_0x223b40(rdram, ctx, runtime); return;
    ctx->pc = 0x220CE4u;
label_220ce4:
    // 0x220ce4: 0x3e00008
    ctx->pc = 0x220CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220C68u: goto label_220c68;
            case 0x220C8Cu: goto label_220c8c;
            case 0x220CB0u: goto label_220cb0;
            case 0x220CDCu: goto label_220cdc;
            case 0x220CE4u: goto label_220ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220CECu;
}
