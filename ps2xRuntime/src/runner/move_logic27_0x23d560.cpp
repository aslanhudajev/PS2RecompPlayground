#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic27
// Address: 0x23d560 - 0x23d610
void move_logic27_0x23d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23d560u;

    // 0x23d560: 0x27bdfff0
    ctx->pc = 0x23d560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d564: 0xffbf0000
    ctx->pc = 0x23d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d568: 0x240303b0
    ctx->pc = 0x23d568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23d56c: 0x831818
    ctx->pc = 0x23d56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d570: 0x3c020033
    ctx->pc = 0x23d570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23d574: 0x2442dfd0
    ctx->pc = 0x23d574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23d578: 0x622821
    ctx->pc = 0x23d578u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d57c: 0x40034800
    ctx->pc = 0x23d57cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d580: 0x3c02003a
    ctx->pc = 0x23d580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d584: 0x8c4221d0
    ctx->pc = 0x23d584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d588: 0xac430318
    ctx->pc = 0x23d588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 792), GPR_U32(ctx, 3));
    // 0x23d58c: 0x84a20288
    ctx->pc = 0x23d58cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 648)));
    // 0x23d590: 0x4410007
    ctx->pc = 0x23D590u;
    {
        const bool branch_taken_0x23d590 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23D594u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x23d590) {
            ctx->pc = 0x23D5B0u;
            goto label_23d5b0;
        }
    }
    ctx->pc = 0x23D598u;
    // 0x23d598: 0xaca00224
    ctx->pc = 0x23d598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 0));
    // 0x23d59c: 0xaca00228
    ctx->pc = 0x23d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 552), GPR_U32(ctx, 0));
    // 0x23d5a0: 0xc090e82
    ctx->pc = 0x23D5A0u;
    SET_GPR_U32(ctx, 31, 0x23D5A8u);
    ctx->pc = 0x23D5A4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 556), GPR_U32(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5A8u; }
    }
    if (ctx->pc != 0x23D5A8u) { return; }
    ctx->pc = 0x23D5A8u;
    // 0x23d5a8: 0x1000000b
    ctx->pc = 0x23D5A8u;
    {
        const bool branch_taken_0x23d5a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d5a8) {
            ctx->pc = 0x23D5D8u;
            goto label_23d5d8;
        }
    }
    ctx->pc = 0x23D5B0u;
label_23d5b0:
    // 0x23d5b0: 0x3c014974
    ctx->pc = 0x23d5b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18804 << 16));
    // 0x23d5b4: 0x342123f0
    ctx->pc = 0x23d5b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 9200));
    // 0x23d5b8: 0x44810000
    ctx->pc = 0x23d5b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d5bc: 0xe4a00314
    ctx->pc = 0x23d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 788), bits); }
    // 0x23d5c0: 0x2463dfd0
    ctx->pc = 0x23d5c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x23d5c4: 0x240203b0
    ctx->pc = 0x23d5c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23d5c8: 0x821018
    ctx->pc = 0x23d5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d5cc: 0x431021
    ctx->pc = 0x23d5ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d5d0: 0xc09085e
    ctx->pc = 0x23D5D0u;
    SET_GPR_U32(ctx, 31, 0x23D5D8u);
    ctx->pc = 0x23D5D4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 804), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x242178u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic00_0x242178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5D8u; }
    }
    if (ctx->pc != 0x23D5D8u) { return; }
    ctx->pc = 0x23D5D8u;
label_23d5d8:
    // 0x23d5d8: 0x40034800
    ctx->pc = 0x23d5d8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d5dc: 0x3c02003a
    ctx->pc = 0x23d5dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d5e0: 0x8c4421d0
    ctx->pc = 0x23d5e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d5e4: 0x8c820318
    ctx->pc = 0x23d5e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x23d5e8: 0x621823
    ctx->pc = 0x23d5e8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d5ec: 0x8c820310
    ctx->pc = 0x23d5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x23d5f0: 0x621821
    ctx->pc = 0x23d5f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d5f4: 0xac830310
    ctx->pc = 0x23d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 784), GPR_U32(ctx, 3));
    // 0x23d5f8: 0x8c820314
    ctx->pc = 0x23d5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 788)));
    // 0x23d5fc: 0x24420001
    ctx->pc = 0x23d5fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d600: 0xac820314
    ctx->pc = 0x23d600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 2));
    // 0x23d604: 0xdfbf0000
    ctx->pc = 0x23d604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d608: 0x3e00008
    ctx->pc = 0x23D608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D5B0u: goto label_23d5b0;
            case 0x23D5D8u: goto label_23d5d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D610u;
}
