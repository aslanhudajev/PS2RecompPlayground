#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitStage__Fv
// Address: 0x1e2a50 - 0x1e2b08
void InitStage__Fv_0x1e2a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitStage__Fv");


    ctx->pc = 0x1e2a50u;

    // 0x1e2a50: 0x27bdfff0
    ctx->pc = 0x1e2a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2a54: 0x7fbf0000
    ctx->pc = 0x1e2a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e2a58: 0x3c020050
    ctx->pc = 0x1e2a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2a5c: 0xa7808d74
    ctx->pc = 0x1e2a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937972), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2a60: 0xa7808d70
    ctx->pc = 0x1e2a60u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937968), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2a64: 0xa7808c18
    ctx->pc = 0x1e2a64u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937624), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2a68: 0xa7808c14
    ctx->pc = 0x1e2a68u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937620), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2a6c: 0xa7808d6c
    ctx->pc = 0x1e2a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937964), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2a70: 0xa7808c10
    ctx->pc = 0x1e2a70u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937616), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2a74: 0xa7808c0c
    ctx->pc = 0x1e2a74u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937612), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2a78: 0x2442dd20
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x1e2a7c: 0xac400060
    ctx->pc = 0x1e2a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1e2a80: 0xac400064
    ctx->pc = 0x1e2a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1e2a84: 0xac400068
    ctx->pc = 0x1e2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1e2a88: 0x3c020050
    ctx->pc = 0x1e2a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2a8c: 0x2442e068
    ctx->pc = 0x1e2a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959208));
    // 0x1e2a90: 0xac400060
    ctx->pc = 0x1e2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1e2a94: 0xac400064
    ctx->pc = 0x1e2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1e2a98: 0xac400068
    ctx->pc = 0x1e2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1e2a9c: 0x3c020050
    ctx->pc = 0x1e2a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2aa0: 0x2443e400
    ctx->pc = 0x1e2aa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294960128));
    // 0x1e2aa4: 0x24020101
    ctx->pc = 0x1e2aa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x1e2aa8: 0x2442ffff
    ctx->pc = 0x1e2aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e2aac: 0xaf808ba0
    ctx->pc = 0x1e2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 0));
    // 0x1e2ab0: 0xaf808b6c
    ctx->pc = 0x1e2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 0));
    // 0x1e2ab4: 0x10400008
    ctx->pc = 0x1E2AB4u;
    {
        const bool branch_taken_0x1e2ab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2AB8u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937492), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1e2ab4) {
            ctx->pc = 0x1E2AD8u;
            goto label_1e2ad8;
        }
    }
    ctx->pc = 0x1E2ABCu;
label_1e2abc:
    // 0x1e2abc: 0xa0600000
    ctx->pc = 0x1e2abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e2ac0: 0x2442ffff
    ctx->pc = 0x1e2ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e2ac4: 0x24630001
    ctx->pc = 0x1e2ac4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2ac8: 0x0
    ctx->pc = 0x1e2ac8u;
    // NOP
    // 0x1e2acc: 0x0
    ctx->pc = 0x1e2accu;
    // NOP
    // 0x1e2ad0: 0x1440fffa
    ctx->pc = 0x1E2AD0u;
    {
        const bool branch_taken_0x1e2ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e2ad0) {
            ctx->pc = 0x1E2ABCu;
            goto label_1e2abc;
        }
    }
    ctx->pc = 0x1E2AD8u;
label_1e2ad8:
    // 0x1e2ad8: 0xc24cbbc
    ctx->pc = 0x1E2AD8u;
    SET_GPR_U32(ctx, 31, 0x1E2AE0u);
    ctx->pc = 0x932EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnmIDInit__Fv_0x932ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AE0u; }
        else if (ctx->pc != 0x1E2AE0u) { ctx->pc = 0x1E2AE0u; }
    }
    if (ctx->pc != 0x1E2AE0u) { return; }
    ctx->pc = 0x1E2AE0u;
    // 0x1e2ae0: 0xc24cbfc
    ctx->pc = 0x1E2AE0u;
    SET_GPR_U32(ctx, 31, 0x1E2AE8u);
    ctx->pc = 0x932FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        H_AppEnAdrBufInit__Fv_0x932ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AE8u; }
        else if (ctx->pc != 0x1E2AE8u) { ctx->pc = 0x1E2AE8u; }
    }
    if (ctx->pc != 0x1E2AE8u) { return; }
    ctx->pc = 0x1E2AE8u;
    // 0x1e2ae8: 0xaf808b60
    ctx->pc = 0x1e2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 0));
    // 0x1e2aec: 0xaf808b64
    ctx->pc = 0x1e2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 0));
    // 0x1e2af0: 0xaf808ba4
    ctx->pc = 0x1e2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937508), GPR_U32(ctx, 0));
    // 0x1e2af4: 0xc084edc
    ctx->pc = 0x1E2AF4u;
    SET_GPR_U32(ctx, 31, 0x1E2AFCu);
    ctx->pc = 0x1E2AF8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 0));
    ctx->pc = 0x213B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitDispSilver__Fv_0x213b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AFCu; }
        else if (ctx->pc != 0x1E2AFCu) { ctx->pc = 0x1E2AFCu; }
    }
    if (ctx->pc != 0x1E2AFCu) { return; }
    ctx->pc = 0x1E2AFCu;
    // 0x1e2afc: 0x7bbf0000
    ctx->pc = 0x1e2afcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2b00: 0x3e00008
    ctx->pc = 0x1E2B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2B04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2ABCu: goto label_1e2abc;
            case 0x1E2AD8u: goto label_1e2ad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2B08u;
}
