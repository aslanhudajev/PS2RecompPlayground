#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsOptFn1
// Address: 0x175948 - 0x1759ac
void cvFsOptFn1_0x175948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsOptFn1");


    ctx->pc = 0x175948u;

label_175948:
    // 0x175948: 0x27bdffe0
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_17594c:
    // 0x17594c: 0xffb00000
    ctx->pc = 0x17594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_175950:
    // 0x175950: 0xffbf0010
    ctx->pc = 0x175950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_175954:
    // 0x175954: 0x14800006
label_175958:
    if (ctx->pc == 0x175958u) {
        ctx->pc = 0x175958u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17595Cu;
        goto label_17595c;
    }
    ctx->pc = 0x175954u;
    {
        const bool branch_taken_0x175954 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175958u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175954) {
            ctx->pc = 0x175970u;
            goto label_175970;
        }
    }
    ctx->pc = 0x17595Cu;
label_17595c:
    // 0x17595c: 0x3c04002c
    ctx->pc = 0x17595cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175960:
    // 0x175960: 0xc05d076
label_175964:
    if (ctx->pc == 0x175964u) {
        ctx->pc = 0x175964u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946032));
        ctx->pc = 0x175968u;
        goto label_175968;
    }
    ctx->pc = 0x175960u;
    SET_GPR_U32(ctx, 31, 0x175968u);
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946032));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175968u; }
        else if (ctx->pc != 0x175968u) { ctx->pc = 0x175968u; }
    }
    if (ctx->pc != 0x175968u) { return; }
    ctx->pc = 0x175968u;
label_175968:
    // 0x175968: 0x1000000c
label_17596c:
    if (ctx->pc == 0x17596Cu) {
        ctx->pc = 0x17596Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175970u;
        goto label_175970;
    }
    ctx->pc = 0x175968u;
    {
        const bool branch_taken_0x175968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17596Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175968) {
            ctx->pc = 0x17599Cu;
            goto label_17599c;
        }
    }
    ctx->pc = 0x175970u;
label_175970:
    // 0x175970: 0x8c820000
    ctx->pc = 0x175970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175974:
    // 0x175974: 0x8c420060
    ctx->pc = 0x175974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_175978:
    // 0x175978: 0x50400005
label_17597c:
    if (ctx->pc == 0x17597Cu) {
        ctx->pc = 0x17597Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175980u;
        goto label_175980;
    }
    ctx->pc = 0x175978u;
    {
        const bool branch_taken_0x175978 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x175978) {
            ctx->pc = 0x17597Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x175990u;
            goto label_175990;
        }
    }
    ctx->pc = 0x175980u;
label_175980:
    // 0x175980: 0x40f809
label_175984:
    if (ctx->pc == 0x175984u) {
        ctx->pc = 0x175984u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x175988u;
        goto label_175988;
    }
    ctx->pc = 0x175980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175988u);
        ctx->pc = 0x175984u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175948u: goto label_175948;
            case 0x17594Cu: goto label_17594c;
            case 0x175950u: goto label_175950;
            case 0x175954u: goto label_175954;
            case 0x175958u: goto label_175958;
            case 0x17595Cu: goto label_17595c;
            case 0x175960u: goto label_175960;
            case 0x175964u: goto label_175964;
            case 0x175968u: goto label_175968;
            case 0x17596Cu: goto label_17596c;
            case 0x175970u: goto label_175970;
            case 0x175974u: goto label_175974;
            case 0x175978u: goto label_175978;
            case 0x17597Cu: goto label_17597c;
            case 0x175980u: goto label_175980;
            case 0x175984u: goto label_175984;
            case 0x175988u: goto label_175988;
            case 0x17598Cu: goto label_17598c;
            case 0x175990u: goto label_175990;
            case 0x175994u: goto label_175994;
            case 0x175998u: goto label_175998;
            case 0x17599Cu: goto label_17599c;
            case 0x1759A0u: goto label_1759a0;
            case 0x1759A4u: goto label_1759a4;
            case 0x1759A8u: goto label_1759a8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175988u; }
            if (ctx->pc != 0x175988u) { return; }
        }
    }
    ctx->pc = 0x175988u;
label_175988:
    // 0x175988: 0x10000003
label_17598c:
    if (ctx->pc == 0x17598Cu) {
        ctx->pc = 0x17598Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175990u;
        goto label_175990;
    }
    ctx->pc = 0x175988u;
    {
        const bool branch_taken_0x175988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17598Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175988) {
            ctx->pc = 0x175998u;
            goto label_175998;
        }
    }
    ctx->pc = 0x175990u;
label_175990:
    // 0x175990: 0xc05d076
label_175994:
    if (ctx->pc == 0x175994u) {
        ctx->pc = 0x175994u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946064));
        ctx->pc = 0x175998u;
        goto label_175998;
    }
    ctx->pc = 0x175990u;
    SET_GPR_U32(ctx, 31, 0x175998u);
    ctx->pc = 0x175994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946064));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175998u; }
        else if (ctx->pc != 0x175998u) { ctx->pc = 0x175998u; }
    }
    if (ctx->pc != 0x175998u) { return; }
    ctx->pc = 0x175998u;
label_175998:
    // 0x175998: 0x200102d
    ctx->pc = 0x175998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17599c:
    // 0x17599c: 0xdfbf0010
    ctx->pc = 0x17599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1759a0:
    // 0x1759a0: 0xdfb00000
    ctx->pc = 0x1759a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1759a4:
    // 0x1759a4: 0x3e00008
label_1759a8:
    if (ctx->pc == 0x1759A8u) {
        ctx->pc = 0x1759A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1759ACu;
        goto label_fallthrough_0x1759a4;
    }
    ctx->pc = 0x1759A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1759A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175948u: goto label_175948;
            case 0x17594Cu: goto label_17594c;
            case 0x175950u: goto label_175950;
            case 0x175954u: goto label_175954;
            case 0x175958u: goto label_175958;
            case 0x17595Cu: goto label_17595c;
            case 0x175960u: goto label_175960;
            case 0x175964u: goto label_175964;
            case 0x175968u: goto label_175968;
            case 0x17596Cu: goto label_17596c;
            case 0x175970u: goto label_175970;
            case 0x175974u: goto label_175974;
            case 0x175978u: goto label_175978;
            case 0x17597Cu: goto label_17597c;
            case 0x175980u: goto label_175980;
            case 0x175984u: goto label_175984;
            case 0x175988u: goto label_175988;
            case 0x17598Cu: goto label_17598c;
            case 0x175990u: goto label_175990;
            case 0x175994u: goto label_175994;
            case 0x175998u: goto label_175998;
            case 0x17599Cu: goto label_17599c;
            case 0x1759A0u: goto label_1759a0;
            case 0x1759A4u: goto label_1759a4;
            case 0x1759A8u: goto label_1759a8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1759a4:
    ctx->pc = 0x1759ACu;
}
