#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ZMAT__13EventCtrlTaskFv
// Address: 0x1e4a90 - 0x1e4b2c
void ZMAT__13EventCtrlTaskFv_0x1e4a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ZMAT__13EventCtrlTaskFv");


    ctx->pc = 0x1e4a90u;

    // 0x1e4a90: 0x27bdffd0
    ctx->pc = 0x1e4a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4a94: 0x7fbf0020
    ctx->pc = 0x1e4a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e4a98: 0x7fb10010
    ctx->pc = 0x1e4a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4a9c: 0x7fb00000
    ctx->pc = 0x1e4a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4aa0: 0x70808e28
    ctx->pc = 0x1e4aa0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4aa4: 0x10000012
    ctx->pc = 0x1E4AA4u;
    {
        const bool branch_taken_0x1e4aa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4AA8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e4aa4) {
            ctx->pc = 0x1E4AF0u;
            goto label_1e4af0;
        }
    }
    ctx->pc = 0x1E4AACu;
label_1e4aac:
    // 0x1e4aac: 0x8e24000c
    ctx->pc = 0x1e4aacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e4ab0: 0x27838c1c
    ctx->pc = 0x1e4ab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294937628));
    // 0x1e4ab4: 0x701821
    ctx->pc = 0x1e4ab4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e4ab8: 0x26100001
    ctx->pc = 0x1e4ab8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e4abc: 0x2a010004
    ctx->pc = 0x1e4abcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1e4ac0: 0x90840000
    ctx->pc = 0x1e4ac0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4ac4: 0x1420000a
    ctx->pc = 0x1E4AC4u;
    {
        const bool branch_taken_0x1e4ac4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E4AC8u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1e4ac4) {
            ctx->pc = 0x1E4AF0u;
            goto label_1e4af0;
        }
    }
    ctx->pc = 0x1E4ACCu;
    // 0x1e4acc: 0x24040014
    ctx->pc = 0x1e4accu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e4ad0: 0xc06aef8
    ctx->pc = 0x1E4AD0u;
    SET_GPR_U32(ctx, 31, 0x1E4AD8u);
    ctx->pc = 0x1E4AD4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABBE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLocate_0x1abbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AD8u; }
        else if (ctx->pc != 0x1E4AD8u) { ctx->pc = 0x1E4AD8u; }
    }
    if (ctx->pc != 0x1E4AD8u) { return; }
    ctx->pc = 0x1E4AD8u;
    // 0x1e4ad8: 0x3c020027
    ctx->pc = 0x1e4ad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e4adc: 0x2444a8d0
    ctx->pc = 0x1e4adcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944976));
    // 0x1e4ae0: 0xc06af30
    ctx->pc = 0x1E4AE0u;
    SET_GPR_U32(ctx, 31, 0x1E4AE8u);
    ctx->pc = 0x1E4AE4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABCC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrintf_0x1abcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AE8u; }
        else if (ctx->pc != 0x1E4AE8u) { ctx->pc = 0x1E4AE8u; }
    }
    if (ctx->pc != 0x1E4AE8u) { return; }
    ctx->pc = 0x1E4AE8u;
    // 0x1e4ae8: 0xd
    ctx->pc = 0x1e4ae8u;
    runtime->handleBreak(rdram, ctx);
    // 0x1e4aec: 0x0
    ctx->pc = 0x1e4aecu;
    // NOP
label_1e4af0:
    // 0x1e4af0: 0x8e25000c
    ctx->pc = 0x1e4af0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e4af4: 0x2403ffff
    ctx->pc = 0x1e4af4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4af8: 0x24a40004
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4afc: 0xae24000c
    ctx->pc = 0x1e4afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x1e4b00: 0x8ca40004
    ctx->pc = 0x1e4b00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e4b04: 0x1483ffe9
    ctx->pc = 0x1E4B04u;
    {
        const bool branch_taken_0x1e4b04 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e4b04) {
            ctx->pc = 0x1E4AACu;
            goto label_1e4aac;
        }
    }
    ctx->pc = 0x1E4B0Cu;
    // 0x1e4b0c: 0x8e23000c
    ctx->pc = 0x1e4b0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e4b10: 0x24630004
    ctx->pc = 0x1e4b10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e4b14: 0xae23000c
    ctx->pc = 0x1e4b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1e4b18: 0x7bbf0020
    ctx->pc = 0x1e4b18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4b1c: 0x7bb10010
    ctx->pc = 0x1e4b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4b20: 0x7bb00000
    ctx->pc = 0x1e4b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4b24: 0x3e00008
    ctx->pc = 0x1E4B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4AACu: goto label_1e4aac;
            case 0x1E4AF0u: goto label_1e4af0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4B2Cu;
}
