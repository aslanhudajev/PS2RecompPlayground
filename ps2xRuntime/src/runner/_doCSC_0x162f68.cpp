#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _doCSC
// Address: 0x162f68 - 0x163050
void _doCSC_0x162f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_doCSC");


    ctx->pc = 0x162f68u;

    // 0x162f68: 0x27bdffd0
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162f6c: 0x3c031000
    ctx->pc = 0x162f6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x162f70: 0xffbf0020
    ctx->pc = 0x162f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162f74: 0x53980
    ctx->pc = 0x162f74u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 6));
    // 0x162f78: 0x80302d
    ctx->pc = 0x162f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f7c: 0x34632010
    ctx->pc = 0x162f7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_162f80:
    // 0x162f80: 0x8c620000
    ctx->pc = 0x162f80u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x162f84: 0x0
    ctx->pc = 0x162f84u;
    // NOP
    // 0x162f88: 0x0
    ctx->pc = 0x162f88u;
    // NOP
    // 0x162f8c: 0x0
    ctx->pc = 0x162f8cu;
    // NOP
    // 0x162f90: 0x0
    ctx->pc = 0x162f90u;
    // NOP
    // 0x162f94: 0x440fffa
    ctx->pc = 0x162F94u;
    {
        const bool branch_taken_0x162f94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x162f94) {
            ctx->pc = 0x162F80u;
            goto label_162f80;
        }
    }
    ctx->pc = 0x162F9Cu;
    // 0x162f9c: 0x3c020fff
    ctx->pc = 0x162f9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x162fa0: 0x3c041000
    ctx->pc = 0x162fa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x162fa4: 0x3442ffff
    ctx->pc = 0x162fa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x162fa8: 0x3484b010
    ctx->pc = 0x162fa8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45072));
    // 0x162fac: 0xc21024
    ctx->pc = 0x162facu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x162fb0: 0x3c031000
    ctx->pc = 0x162fb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x162fb4: 0xac820000
    ctx->pc = 0x162fb4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x162fb8: 0x3463b020
    ctx->pc = 0x162fb8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45088));
    // 0x162fbc: 0xac670000
    ctx->pc = 0x162fbcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x162fc0: 0x3c021000
    ctx->pc = 0x162fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x162fc4: 0x3442b000
    ctx->pc = 0x162fc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45056));
    // 0x162fc8: 0x24030100
    ctx->pc = 0x162fc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x162fcc: 0x3c047000
    ctx->pc = 0x162fccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x162fd0: 0xac430000
    ctx->pc = 0x162fd0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x162fd4: 0xc058470
    ctx->pc = 0x162FD4u;
    SET_GPR_U32(ctx, 31, 0x162FDCu);
    ctx->pc = 0x162FD8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FDCu; }
        else if (ctx->pc != 0x162FDCu) { ctx->pc = 0x162FDCu; }
    }
    if (ctx->pc != 0x162FDCu) { return; }
    ctx->pc = 0x162FDCu;
    // 0x162fdc: 0x3c020023
    ctx->pc = 0x162fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162fe0: 0x24030004
    ctx->pc = 0x162fe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x162fe4: 0x8c44a21c
    ctx->pc = 0x162fe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x162fe8: 0x3a0282d
    ctx->pc = 0x162fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162fec: 0xc058eec
    ctx->pc = 0x162FECu;
    SET_GPR_U32(ctx, 31, 0x162FF4u);
    ctx->pc = 0x162FF0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FF4u; }
        else if (ctx->pc != 0x162FF4u) { ctx->pc = 0x162FF4u; }
    }
    if (ctx->pc != 0x162FF4u) { return; }
    ctx->pc = 0x162FF4u;
    // 0x162ff4: 0x3c031000
    ctx->pc = 0x162ff4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x162ff8: 0x3463b000
    ctx->pc = 0x162ff8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x162ffc: 0x0
    ctx->pc = 0x162ffcu;
    // NOP
label_163000:
    // 0x163000: 0x8c620000
    ctx->pc = 0x163000u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x163004: 0x21202
    ctx->pc = 0x163004u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x163008: 0x30420001
    ctx->pc = 0x163008u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x16300c: 0x0
    ctx->pc = 0x16300cu;
    // NOP
    // 0x163010: 0x0
    ctx->pc = 0x163010u;
    // NOP
    // 0x163014: 0x1440fffa
    ctx->pc = 0x163014u;
    {
        const bool branch_taken_0x163014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x163014) {
            ctx->pc = 0x163000u;
            goto label_163000;
        }
    }
    ctx->pc = 0x16301Cu;
    // 0x16301c: 0x3c031000
    ctx->pc = 0x16301cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x163020: 0x34632010
    ctx->pc = 0x163020u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x163024: 0x0
    ctx->pc = 0x163024u;
    // NOP
label_163028:
    // 0x163028: 0x8c620000
    ctx->pc = 0x163028u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x16302c: 0x0
    ctx->pc = 0x16302cu;
    // NOP
    // 0x163030: 0x0
    ctx->pc = 0x163030u;
    // NOP
    // 0x163034: 0x0
    ctx->pc = 0x163034u;
    // NOP
    // 0x163038: 0x0
    ctx->pc = 0x163038u;
    // NOP
    // 0x16303c: 0x440fffa
    ctx->pc = 0x16303Cu;
    {
        const bool branch_taken_0x16303c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16303c) {
            ctx->pc = 0x163028u;
            goto label_163028;
        }
    }
    ctx->pc = 0x163044u;
    // 0x163044: 0xdfbf0020
    ctx->pc = 0x163044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163048: 0x3e00008
    ctx->pc = 0x163048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16304Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162F80u: goto label_162f80;
            case 0x163000u: goto label_163000;
            case 0x163028u: goto label_163028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163050u;
}
