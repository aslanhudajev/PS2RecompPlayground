#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetTrHn
// Address: 0x19d5c0 - 0x19d62c
void SFD_GetTrHn_0x19d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetTrHn");


    ctx->pc = 0x19d5c0u;

    // 0x19d5c0: 0x27bdffc0
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d5c4: 0xffb00000
    ctx->pc = 0x19d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d5c8: 0xffb20020
    ctx->pc = 0x19d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d5cc: 0x80802d
    ctx->pc = 0x19d5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5d0: 0xffb10010
    ctx->pc = 0x19d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d5d4: 0xc0902d
    ctx->pc = 0x19d5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5d8: 0xffbf0030
    ctx->pc = 0x19d5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d5dc: 0xc064f1e
    ctx->pc = 0x19D5DCu;
    SET_GPR_U32(ctx, 31, 0x19D5E4u);
    ctx->pc = 0x19D5E0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5E4u; }
        else if (ctx->pc != 0x19D5E4u) { ctx->pc = 0x19D5E4u; }
    }
    if (ctx->pc != 0x19D5E4u) { return; }
    ctx->pc = 0x19D5E4u;
    // 0x19d5e4: 0x10400006
    ctx->pc = 0x19D5E4u;
    {
        const bool branch_taken_0x19d5e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D5E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d5e4) {
            ctx->pc = 0x19D600u;
            goto label_19d600;
        }
    }
    ctx->pc = 0x19D5ECu;
    // 0x19d5ec: 0x3c05ff00
    ctx->pc = 0x19d5ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19d5f0: 0xc064ea0
    ctx->pc = 0x19D5F0u;
    SET_GPR_U32(ctx, 31, 0x19D5F8u);
    ctx->pc = 0x19D5F4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 279));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5F8u; }
        else if (ctx->pc != 0x19D5F8u) { ctx->pc = 0x19D5F8u; }
    }
    if (ctx->pc != 0x19D5F8u) { return; }
    ctx->pc = 0x19D5F8u;
    // 0x19d5f8: 0x10000007
    ctx->pc = 0x19D5F8u;
    {
        const bool branch_taken_0x19d5f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D5FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19d5f8) {
            ctx->pc = 0x19D618u;
            goto label_19d618;
        }
    }
    ctx->pc = 0x19D600u;
label_19d600:
    // 0x19d600: 0x200202d
    ctx->pc = 0x19d600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d604: 0x220282d
    ctx->pc = 0x19d604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d608: 0xc06758c
    ctx->pc = 0x19D608u;
    SET_GPR_U32(ctx, 31, 0x19D610u);
    ctx->pc = 0x19D60Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D630u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetTrHn_0x19d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D610u; }
        else if (ctx->pc != 0x19D610u) { ctx->pc = 0x19D610u; }
    }
    if (ctx->pc != 0x19D610u) { return; }
    ctx->pc = 0x19D610u;
    // 0x19d610: 0x102d
    ctx->pc = 0x19d610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d614: 0xdfbf0030
    ctx->pc = 0x19d614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d618:
    // 0x19d618: 0xdfb20020
    ctx->pc = 0x19d618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d61c: 0xdfb10010
    ctx->pc = 0x19d61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d620: 0xdfb00000
    ctx->pc = 0x19d620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d624: 0x3e00008
    ctx->pc = 0x19D624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D600u: goto label_19d600;
            case 0x19D618u: goto label_19d618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D62Cu;
}
