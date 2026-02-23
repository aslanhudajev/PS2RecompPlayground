#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiSeek
// Address: 0x178ed8 - 0x178f6c
void htCiSeek_0x178ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiSeek");


    ctx->pc = 0x178ed8u;

    // 0x178ed8: 0x27bdfff0
    ctx->pc = 0x178ed8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178edc: 0x80382d
    ctx->pc = 0x178edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ee0: 0x14e00007
    ctx->pc = 0x178EE0u;
    {
        const bool branch_taken_0x178ee0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x178EE4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x178ee0) {
            ctx->pc = 0x178F00u;
            goto label_178f00;
        }
    }
    ctx->pc = 0x178EE8u;
    // 0x178ee8: 0x3c05002c
    ctx->pc = 0x178ee8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x178eec: 0x202d
    ctx->pc = 0x178eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ef0: 0xc05e1ca
    ctx->pc = 0x178EF0u;
    SET_GPR_U32(ctx, 31, 0x178EF8u);
    ctx->pc = 0x178EF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948912));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178EF8u; }
        else if (ctx->pc != 0x178EF8u) { ctx->pc = 0x178EF8u; }
    }
    if (ctx->pc != 0x178EF8u) { return; }
    ctx->pc = 0x178EF8u;
    // 0x178ef8: 0x10000019
    ctx->pc = 0x178EF8u;
    {
        const bool branch_taken_0x178ef8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178EFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178ef8) {
            ctx->pc = 0x178F60u;
            goto label_178f60;
        }
    }
    ctx->pc = 0x178F00u;
label_178f00:
    // 0x178f00: 0x14c00003
    ctx->pc = 0x178F00u;
    {
        const bool branch_taken_0x178f00 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x178F04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x178f00) {
            ctx->pc = 0x178F10u;
            goto label_178f10;
        }
    }
    ctx->pc = 0x178F08u;
    // 0x178f08: 0x1000000d
    ctx->pc = 0x178F08u;
    {
        const bool branch_taken_0x178f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178F0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
        if (branch_taken_0x178f08) {
            ctx->pc = 0x178F40u;
            goto label_178f40;
        }
    }
    ctx->pc = 0x178F10u;
label_178f10:
    // 0x178f10: 0x14c20005
    ctx->pc = 0x178F10u;
    {
        const bool branch_taken_0x178f10 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x178F14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x178f10) {
            ctx->pc = 0x178F28u;
            goto label_178f28;
        }
    }
    ctx->pc = 0x178F18u;
    // 0x178f18: 0x8ce60014
    ctx->pc = 0x178f18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x178f1c: 0xc51021
    ctx->pc = 0x178f1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x178f20: 0x10000008
    ctx->pc = 0x178F20u;
    {
        const bool branch_taken_0x178f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178F24u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x178f20) {
            ctx->pc = 0x178F44u;
            goto label_178f44;
        }
    }
    ctx->pc = 0x178F28u;
label_178f28:
    // 0x178f28: 0x14c20006
    ctx->pc = 0x178F28u;
    {
        const bool branch_taken_0x178f28 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x178F2Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 20)));
        if (branch_taken_0x178f28) {
            ctx->pc = 0x178F44u;
            goto label_178f44;
        }
    }
    ctx->pc = 0x178F30u;
    // 0x178f30: 0x8ce20018
    ctx->pc = 0x178f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x178f34: 0x451021
    ctx->pc = 0x178f34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x178f38: 0x10000002
    ctx->pc = 0x178F38u;
    {
        const bool branch_taken_0x178f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178F3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x178f38) {
            ctx->pc = 0x178F44u;
            goto label_178f44;
        }
    }
    ctx->pc = 0x178F40u;
label_178f40:
    // 0x178f40: 0x8ce60014
    ctx->pc = 0x178f40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_178f44:
    // 0x178f44: 0x8ce20018
    ctx->pc = 0x178f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x178f48: 0x2403ffff
    ctx->pc = 0x178f48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178f4c: 0x46202a
    ctx->pc = 0x178f4cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x178f50: 0xc4100a
    ctx->pc = 0x178f50u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x178f54: 0x62182a
    ctx->pc = 0x178f54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x178f58: 0x3100a
    ctx->pc = 0x178f58u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x178f5c: 0xace20018
    ctx->pc = 0x178f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
label_178f60:
    // 0x178f60: 0xdfbf0000
    ctx->pc = 0x178f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f64: 0x3e00008
    ctx->pc = 0x178F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178F00u: goto label_178f00;
            case 0x178F10u: goto label_178f10;
            case 0x178F28u: goto label_178f28;
            case 0x178F40u: goto label_178f40;
            case 0x178F44u: goto label_178f44;
            case 0x178F60u: goto label_178f60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178F6Cu;
}
