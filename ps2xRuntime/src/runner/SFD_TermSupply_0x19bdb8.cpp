#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_TermSupply
// Address: 0x19bdb8 - 0x19be14
void SFD_TermSupply_0x19bdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_TermSupply");


    ctx->pc = 0x19bdb8u;

    // 0x19bdb8: 0x27bdffe0
    ctx->pc = 0x19bdb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bdbc: 0xffb00000
    ctx->pc = 0x19bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bdc0: 0xffbf0010
    ctx->pc = 0x19bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bdc4: 0xc064f1e
    ctx->pc = 0x19BDC4u;
    SET_GPR_U32(ctx, 31, 0x19BDCCu);
    ctx->pc = 0x19BDC8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDCCu; }
        else if (ctx->pc != 0x19BDCCu) { ctx->pc = 0x19BDCCu; }
    }
    if (ctx->pc != 0x19BDCCu) { return; }
    ctx->pc = 0x19BDCCu;
    // 0x19bdcc: 0x10400006
    ctx->pc = 0x19BDCCu;
    {
        const bool branch_taken_0x19bdcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BDD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bdcc) {
            ctx->pc = 0x19BDE8u;
            goto label_19bde8;
        }
    }
    ctx->pc = 0x19BDD4u;
    // 0x19bdd4: 0x3c05ff00
    ctx->pc = 0x19bdd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bdd8: 0xc064ea0
    ctx->pc = 0x19BDD8u;
    SET_GPR_U32(ctx, 31, 0x19BDE0u);
    ctx->pc = 0x19BDDCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 309));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDE0u; }
        else if (ctx->pc != 0x19BDE0u) { ctx->pc = 0x19BDE0u; }
    }
    if (ctx->pc != 0x19BDE0u) { return; }
    ctx->pc = 0x19BDE0u;
    // 0x19bde0: 0x10000009
    ctx->pc = 0x19BDE0u;
    {
        const bool branch_taken_0x19bde0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BDE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19bde0) {
            ctx->pc = 0x19BE08u;
            goto label_19be08;
        }
    }
    ctx->pc = 0x19BDE8u;
label_19bde8:
    // 0x19bde8: 0x8e053028
    ctx->pc = 0x19bde8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12328)));
    // 0x19bdec: 0x200202d
    ctx->pc = 0x19bdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdf0: 0xc064a5a
    ctx->pc = 0x19BDF0u;
    SET_GPR_U32(ctx, 31, 0x19BDF8u);
    ctx->pc = 0x19BDF4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x192968u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetTermFlg_0x192968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF8u; }
        else if (ctx->pc != 0x19BDF8u) { ctx->pc = 0x19BDF8u; }
    }
    if (ctx->pc != 0x19BDF8u) { return; }
    ctx->pc = 0x19BDF8u;
    // 0x19bdf8: 0x24030001
    ctx->pc = 0x19bdf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bdfc: 0x102d
    ctx->pc = 0x19bdfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be00: 0xae03003c
    ctx->pc = 0x19be00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x19be04: 0xdfbf0010
    ctx->pc = 0x19be04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19be08:
    // 0x19be08: 0xdfb00000
    ctx->pc = 0x19be08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be0c: 0x3e00008
    ctx->pc = 0x19BE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BDE8u: goto label_19bde8;
            case 0x19BE08u: goto label_19be08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BE14u;
}
