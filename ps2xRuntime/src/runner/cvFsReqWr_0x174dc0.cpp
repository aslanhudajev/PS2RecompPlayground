#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsReqWr
// Address: 0x174dc0 - 0x174e24
void cvFsReqWr_0x174dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsReqWr");


    ctx->pc = 0x174dc0u;

label_174dc0:
    // 0x174dc0: 0x27bdffe0
    ctx->pc = 0x174dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_174dc4:
    // 0x174dc4: 0xffb00000
    ctx->pc = 0x174dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174dc8:
    // 0x174dc8: 0xffbf0010
    ctx->pc = 0x174dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174dcc:
    // 0x174dcc: 0x14800006
label_174dd0:
    if (ctx->pc == 0x174DD0u) {
        ctx->pc = 0x174DD0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174DD4u;
        goto label_174dd4;
    }
    ctx->pc = 0x174DCCu;
    {
        const bool branch_taken_0x174dcc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x174DD0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174dcc) {
            ctx->pc = 0x174DE8u;
            goto label_174de8;
        }
    }
    ctx->pc = 0x174DD4u;
label_174dd4:
    // 0x174dd4: 0x3c04002c
    ctx->pc = 0x174dd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174dd8:
    // 0x174dd8: 0xc05d076
label_174ddc:
    if (ctx->pc == 0x174DDCu) {
        ctx->pc = 0x174DDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944408));
        ctx->pc = 0x174DE0u;
        goto label_174de0;
    }
    ctx->pc = 0x174DD8u;
    SET_GPR_U32(ctx, 31, 0x174DE0u);
    ctx->pc = 0x174DDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944408));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DE0u; }
        else if (ctx->pc != 0x174DE0u) { ctx->pc = 0x174DE0u; }
    }
    if (ctx->pc != 0x174DE0u) { return; }
    ctx->pc = 0x174DE0u;
label_174de0:
    // 0x174de0: 0x1000000c
label_174de4:
    if (ctx->pc == 0x174DE4u) {
        ctx->pc = 0x174DE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174DE8u;
        goto label_174de8;
    }
    ctx->pc = 0x174DE0u;
    {
        const bool branch_taken_0x174de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174DE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174de0) {
            ctx->pc = 0x174E14u;
            goto label_174e14;
        }
    }
    ctx->pc = 0x174DE8u;
label_174de8:
    // 0x174de8: 0x8c820000
    ctx->pc = 0x174de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174dec:
    // 0x174dec: 0x8c420024
    ctx->pc = 0x174decu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_174df0:
    // 0x174df0: 0x50400005
label_174df4:
    if (ctx->pc == 0x174DF4u) {
        ctx->pc = 0x174DF4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174DF8u;
        goto label_174df8;
    }
    ctx->pc = 0x174DF0u;
    {
        const bool branch_taken_0x174df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x174df0) {
            ctx->pc = 0x174DF4u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x174E08u;
            goto label_174e08;
        }
    }
    ctx->pc = 0x174DF8u;
label_174df8:
    // 0x174df8: 0x40f809
label_174dfc:
    if (ctx->pc == 0x174DFCu) {
        ctx->pc = 0x174DFCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x174E00u;
        goto label_174e00;
    }
    ctx->pc = 0x174DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174E00u);
        ctx->pc = 0x174DFCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174DC0u: goto label_174dc0;
            case 0x174DC4u: goto label_174dc4;
            case 0x174DC8u: goto label_174dc8;
            case 0x174DCCu: goto label_174dcc;
            case 0x174DD0u: goto label_174dd0;
            case 0x174DD4u: goto label_174dd4;
            case 0x174DD8u: goto label_174dd8;
            case 0x174DDCu: goto label_174ddc;
            case 0x174DE0u: goto label_174de0;
            case 0x174DE4u: goto label_174de4;
            case 0x174DE8u: goto label_174de8;
            case 0x174DECu: goto label_174dec;
            case 0x174DF0u: goto label_174df0;
            case 0x174DF4u: goto label_174df4;
            case 0x174DF8u: goto label_174df8;
            case 0x174DFCu: goto label_174dfc;
            case 0x174E00u: goto label_174e00;
            case 0x174E04u: goto label_174e04;
            case 0x174E08u: goto label_174e08;
            case 0x174E0Cu: goto label_174e0c;
            case 0x174E10u: goto label_174e10;
            case 0x174E14u: goto label_174e14;
            case 0x174E18u: goto label_174e18;
            case 0x174E1Cu: goto label_174e1c;
            case 0x174E20u: goto label_174e20;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174E00u; }
            if (ctx->pc != 0x174E00u) { return; }
        }
    }
    ctx->pc = 0x174E00u;
label_174e00:
    // 0x174e00: 0x10000003
label_174e04:
    if (ctx->pc == 0x174E04u) {
        ctx->pc = 0x174E04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174E08u;
        goto label_174e08;
    }
    ctx->pc = 0x174E00u;
    {
        const bool branch_taken_0x174e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174E04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174e00) {
            ctx->pc = 0x174E10u;
            goto label_174e10;
        }
    }
    ctx->pc = 0x174E08u;
label_174e08:
    // 0x174e08: 0xc05d076
label_174e0c:
    if (ctx->pc == 0x174E0Cu) {
        ctx->pc = 0x174E0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944440));
        ctx->pc = 0x174E10u;
        goto label_174e10;
    }
    ctx->pc = 0x174E08u;
    SET_GPR_U32(ctx, 31, 0x174E10u);
    ctx->pc = 0x174E0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944440));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E10u; }
        else if (ctx->pc != 0x174E10u) { ctx->pc = 0x174E10u; }
    }
    if (ctx->pc != 0x174E10u) { return; }
    ctx->pc = 0x174E10u;
label_174e10:
    // 0x174e10: 0x200102d
    ctx->pc = 0x174e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174e14:
    // 0x174e14: 0xdfbf0010
    ctx->pc = 0x174e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174e18:
    // 0x174e18: 0xdfb00000
    ctx->pc = 0x174e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174e1c:
    // 0x174e1c: 0x3e00008
label_174e20:
    if (ctx->pc == 0x174E20u) {
        ctx->pc = 0x174E20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174E24u;
        goto label_fallthrough_0x174e1c;
    }
    ctx->pc = 0x174E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174E20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174DC0u: goto label_174dc0;
            case 0x174DC4u: goto label_174dc4;
            case 0x174DC8u: goto label_174dc8;
            case 0x174DCCu: goto label_174dcc;
            case 0x174DD0u: goto label_174dd0;
            case 0x174DD4u: goto label_174dd4;
            case 0x174DD8u: goto label_174dd8;
            case 0x174DDCu: goto label_174ddc;
            case 0x174DE0u: goto label_174de0;
            case 0x174DE4u: goto label_174de4;
            case 0x174DE8u: goto label_174de8;
            case 0x174DECu: goto label_174dec;
            case 0x174DF0u: goto label_174df0;
            case 0x174DF4u: goto label_174df4;
            case 0x174DF8u: goto label_174df8;
            case 0x174DFCu: goto label_174dfc;
            case 0x174E00u: goto label_174e00;
            case 0x174E04u: goto label_174e04;
            case 0x174E08u: goto label_174e08;
            case 0x174E0Cu: goto label_174e0c;
            case 0x174E10u: goto label_174e10;
            case 0x174E14u: goto label_174e14;
            case 0x174E18u: goto label_174e18;
            case 0x174E1Cu: goto label_174e1c;
            case 0x174E20u: goto label_174e20;
            default: break;
        }
        return;
    }
label_fallthrough_0x174e1c:
    ctx->pc = 0x174E24u;
}
