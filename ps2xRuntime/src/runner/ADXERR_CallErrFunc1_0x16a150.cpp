#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXERR_CallErrFunc1
// Address: 0x16a150 - 0x16a19c
void ADXERR_CallErrFunc1_0x16a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXERR_CallErrFunc1");


    ctx->pc = 0x16a150u;

label_16a150:
    // 0x16a150: 0x27bdffe0
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16a154:
    // 0x16a154: 0x3c020023
    ctx->pc = 0x16a154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_16a158:
    // 0x16a158: 0xffb00000
    ctx->pc = 0x16a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a15c:
    // 0x16a15c: 0x80282d
    ctx->pc = 0x16a15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a160:
    // 0x16a160: 0x2450b490
    ctx->pc = 0x16a160u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294947984));
label_16a164:
    // 0x16a164: 0xffbf0010
    ctx->pc = 0x16a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16a168:
    // 0x16a168: 0x200202d
    ctx->pc = 0x16a168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a16c:
    // 0x16a16c: 0xc05167c
label_16a170:
    if (ctx->pc == 0x16A170u) {
        ctx->pc = 0x16A170u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x16A174u;
        goto label_16a174;
    }
    ctx->pc = 0x16A16Cu;
    SET_GPR_U32(ctx, 31, 0x16A174u);
    ctx->pc = 0x16A170u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A174u; }
        else if (ctx->pc != 0x16A174u) { ctx->pc = 0x16A174u; }
    }
    if (ctx->pc != 0x16A174u) { return; }
    ctx->pc = 0x16A174u;
label_16a174:
    // 0x16a174: 0x8f828108
    ctx->pc = 0x16a174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934792)));
label_16a178:
    // 0x16a178: 0x10400003
label_16a17c:
    if (ctx->pc == 0x16A17Cu) {
        ctx->pc = 0x16A17Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
        ctx->pc = 0x16A180u;
        goto label_16a180;
    }
    ctx->pc = 0x16A178u;
    {
        const bool branch_taken_0x16a178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A17Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
        if (branch_taken_0x16a178) {
            ctx->pc = 0x16A188u;
            goto label_16a188;
        }
    }
    ctx->pc = 0x16A180u;
label_16a180:
    // 0x16a180: 0x40f809
label_16a184:
    if (ctx->pc == 0x16A184u) {
        ctx->pc = 0x16A184u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A188u;
        goto label_16a188;
    }
    ctx->pc = 0x16A180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A188u);
        ctx->pc = 0x16A184u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A150u: goto label_16a150;
            case 0x16A154u: goto label_16a154;
            case 0x16A158u: goto label_16a158;
            case 0x16A15Cu: goto label_16a15c;
            case 0x16A160u: goto label_16a160;
            case 0x16A164u: goto label_16a164;
            case 0x16A168u: goto label_16a168;
            case 0x16A16Cu: goto label_16a16c;
            case 0x16A170u: goto label_16a170;
            case 0x16A174u: goto label_16a174;
            case 0x16A178u: goto label_16a178;
            case 0x16A17Cu: goto label_16a17c;
            case 0x16A180u: goto label_16a180;
            case 0x16A184u: goto label_16a184;
            case 0x16A188u: goto label_16a188;
            case 0x16A18Cu: goto label_16a18c;
            case 0x16A190u: goto label_16a190;
            case 0x16A194u: goto label_16a194;
            case 0x16A198u: goto label_16a198;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16A188u; }
            if (ctx->pc != 0x16A188u) { return; }
        }
    }
    ctx->pc = 0x16A188u;
label_16a188:
    // 0x16a188: 0x200202d
    ctx->pc = 0x16a188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a18c:
    // 0x16a18c: 0xdfbf0010
    ctx->pc = 0x16a18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a190:
    // 0x16a190: 0xdfb00000
    ctx->pc = 0x16a190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a194:
    // 0x16a194: 0x805f70a
label_16a198:
    if (ctx->pc == 0x16A198u) {
        ctx->pc = 0x16A198u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16A19Cu;
        goto label_fallthrough_0x16a194;
    }
    ctx->pc = 0x16A194u;
    ctx->pc = 0x16A198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17DC28u;
    SVM_CallErr_0x17dc28(rdram, ctx, runtime); return;
label_fallthrough_0x16a194:
    ctx->pc = 0x16A19Cu;
}
