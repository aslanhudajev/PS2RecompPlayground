#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_AddWritePtr
// Address: 0x19bd48 - 0x19bdb8
void SFD_AddWritePtr_0x19bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_AddWritePtr");


    ctx->pc = 0x19bd48u;

    // 0x19bd48: 0x27bdffc0
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bd4c: 0xffb00000
    ctx->pc = 0x19bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bd50: 0xffb20020
    ctx->pc = 0x19bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19bd54: 0x80802d
    ctx->pc = 0x19bd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd58: 0xffb10010
    ctx->pc = 0x19bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19bd5c: 0xc0902d
    ctx->pc = 0x19bd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd60: 0xffbf0030
    ctx->pc = 0x19bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19bd64: 0xc064f1e
    ctx->pc = 0x19BD64u;
    SET_GPR_U32(ctx, 31, 0x19BD6Cu);
    ctx->pc = 0x19BD68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD6Cu; }
        else if (ctx->pc != 0x19BD6Cu) { ctx->pc = 0x19BD6Cu; }
    }
    if (ctx->pc != 0x19BD6Cu) { return; }
    ctx->pc = 0x19BD6Cu;
    // 0x19bd6c: 0x10400006
    ctx->pc = 0x19BD6Cu;
    {
        const bool branch_taken_0x19bd6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BD70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bd6c) {
            ctx->pc = 0x19BD88u;
            goto label_19bd88;
        }
    }
    ctx->pc = 0x19BD74u;
    // 0x19bd74: 0x3c05ff00
    ctx->pc = 0x19bd74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bd78: 0xc064ea0
    ctx->pc = 0x19BD78u;
    SET_GPR_U32(ctx, 31, 0x19BD80u);
    ctx->pc = 0x19BD7Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 309));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD80u; }
        else if (ctx->pc != 0x19BD80u) { ctx->pc = 0x19BD80u; }
    }
    if (ctx->pc != 0x19BD80u) { return; }
    ctx->pc = 0x19BD80u;
    // 0x19bd80: 0x10000008
    ctx->pc = 0x19BD80u;
    {
        const bool branch_taken_0x19bd80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BD84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19bd80) {
            ctx->pc = 0x19BDA4u;
            goto label_19bda4;
        }
    }
    ctx->pc = 0x19BD88u;
label_19bd88:
    // 0x19bd88: 0x200202d
    ctx->pc = 0x19bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd8c: 0x220382d
    ctx->pc = 0x19bd8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd90: 0x240402d
    ctx->pc = 0x19bd90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd94: 0x282d
    ctx->pc = 0x19bd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd98: 0xc067cca
    ctx->pc = 0x19BD98u;
    SET_GPR_U32(ctx, 31, 0x19BDA0u);
    ctx->pc = 0x19BD9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDA0u; }
        else if (ctx->pc != 0x19BDA0u) { ctx->pc = 0x19BDA0u; }
    }
    if (ctx->pc != 0x19BDA0u) { return; }
    ctx->pc = 0x19BDA0u;
    // 0x19bda0: 0xdfbf0030
    ctx->pc = 0x19bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19bda4:
    // 0x19bda4: 0xdfb20020
    ctx->pc = 0x19bda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bda8: 0xdfb10010
    ctx->pc = 0x19bda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bdac: 0xdfb00000
    ctx->pc = 0x19bdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bdb0: 0x3e00008
    ctx->pc = 0x19BDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BDB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BD88u: goto label_19bd88;
            case 0x19BDA4u: goto label_19bda4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BDB8u;
}
