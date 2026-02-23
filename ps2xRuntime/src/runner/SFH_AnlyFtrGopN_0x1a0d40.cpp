#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyFtrGopN
// Address: 0x1a0d40 - 0x1a0db8
void SFH_AnlyFtrGopN_0x1a0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyFtrGopN");


    ctx->pc = 0x1a0d40u;

    // 0x1a0d40: 0x27bdffc0
    ctx->pc = 0x1a0d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0d44: 0xffb10010
    ctx->pc = 0x1a0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0d48: 0xffb20020
    ctx->pc = 0x1a0d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0d4c: 0x30b100ff
    ctx->pc = 0x1a0d4cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0d50: 0xffb00000
    ctx->pc = 0x1a0d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0d54: 0xc0902d
    ctx->pc = 0x1a0d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d58: 0xffbf0030
    ctx->pc = 0x1a0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0d5c: 0xc0681d0
    ctx->pc = 0x1A0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D64u);
    ctx->pc = 0x1A0D60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D64u; }
        else if (ctx->pc != 0x1A0D64u) { ctx->pc = 0x1A0D64u; }
    }
    if (ctx->pc != 0x1A0D64u) { return; }
    ctx->pc = 0x1A0D64u;
    // 0x1a0d64: 0x40802d
    ctx->pc = 0x1a0d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d68: 0x12000005
    ctx->pc = 0x1A0D68u;
    {
        const bool branch_taken_0x1a0d68 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0D6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d68) {
            ctx->pc = 0x1A0D80u;
            goto label_1a0d80;
        }
    }
    ctx->pc = 0x1A0D70u;
    // 0x1a0d70: 0xc0683b8
    ctx->pc = 0x1A0D70u;
    SET_GPR_U32(ctx, 31, 0x1A0D78u);
    ctx->pc = 0x1A0D74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D78u; }
        else if (ctx->pc != 0x1A0D78u) { ctx->pc = 0x1A0D78u; }
    }
    if (ctx->pc != 0x1A0D78u) { return; }
    ctx->pc = 0x1A0D78u;
    // 0x1a0d78: 0x54400003
    ctx->pc = 0x1A0D78u;
    {
        const bool branch_taken_0x1a0d78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0d78) {
            ctx->pc = 0x1A0D7Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
            ctx->pc = 0x1A0D88u;
            goto label_1a0d88;
        }
    }
    ctx->pc = 0x1A0D80u;
label_1a0d80:
    // 0x1a0d80: 0x10000007
    ctx->pc = 0x1A0D80u;
    {
        const bool branch_taken_0x1a0d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0D84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d80) {
            ctx->pc = 0x1A0DA0u;
            goto label_1a0da0;
        }
    }
    ctx->pc = 0x1A0D88u;
label_1a0d88:
    // 0x1a0d88: 0x28430040
    ctx->pc = 0x1a0d88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 64));
    // 0x1a0d8c: 0x14600003
    ctx->pc = 0x1A0D8Cu;
    {
        const bool branch_taken_0x1a0d8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A0D90u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1a0d8c) {
            ctx->pc = 0x1A0D9Cu;
            goto label_1a0d9c;
        }
    }
    ctx->pc = 0x1A0D94u;
    // 0x1a0d94: 0x2402ffff
    ctx->pc = 0x1a0d94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0d98: 0xae420000
    ctx->pc = 0x1a0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1a0d9c:
    // 0x1a0d9c: 0x24020001
    ctx->pc = 0x1a0d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a0da0:
    // 0x1a0da0: 0xdfbf0030
    ctx->pc = 0x1a0da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0da4: 0xdfb20020
    ctx->pc = 0x1a0da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0da8: 0xdfb10010
    ctx->pc = 0x1a0da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0dac: 0xdfb00000
    ctx->pc = 0x1a0dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0db0: 0x3e00008
    ctx->pc = 0x1A0DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0D80u: goto label_1a0d80;
            case 0x1A0D88u: goto label_1a0d88;
            case 0x1A0D9Cu: goto label_1a0d9c;
            case 0x1A0DA0u: goto label_1a0da0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0DB8u;
}
