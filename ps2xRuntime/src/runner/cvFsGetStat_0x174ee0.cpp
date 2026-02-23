#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetStat
// Address: 0x174ee0 - 0x174f44
void cvFsGetStat_0x174ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetStat");


    ctx->pc = 0x174ee0u;

label_174ee0:
    // 0x174ee0: 0x27bdffe0
    ctx->pc = 0x174ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_174ee4:
    // 0x174ee4: 0xffb00000
    ctx->pc = 0x174ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174ee8:
    // 0x174ee8: 0xffbf0010
    ctx->pc = 0x174ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174eec:
    // 0x174eec: 0x14800006
label_174ef0:
    if (ctx->pc == 0x174EF0u) {
        ctx->pc = 0x174EF0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x174EF4u;
        goto label_174ef4;
    }
    ctx->pc = 0x174EECu;
    {
        const bool branch_taken_0x174eec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x174EF0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x174eec) {
            ctx->pc = 0x174F08u;
            goto label_174f08;
        }
    }
    ctx->pc = 0x174EF4u;
label_174ef4:
    // 0x174ef4: 0x3c04002c
    ctx->pc = 0x174ef4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174ef8:
    // 0x174ef8: 0xc05d076
label_174efc:
    if (ctx->pc == 0x174EFCu) {
        ctx->pc = 0x174EFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944528));
        ctx->pc = 0x174F00u;
        goto label_174f00;
    }
    ctx->pc = 0x174EF8u;
    SET_GPR_U32(ctx, 31, 0x174F00u);
    ctx->pc = 0x174EFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944528));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F00u; }
        else if (ctx->pc != 0x174F00u) { ctx->pc = 0x174F00u; }
    }
    if (ctx->pc != 0x174F00u) { return; }
    ctx->pc = 0x174F00u;
label_174f00:
    // 0x174f00: 0x1000000c
label_174f04:
    if (ctx->pc == 0x174F04u) {
        ctx->pc = 0x174F04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x174F08u;
        goto label_174f08;
    }
    ctx->pc = 0x174F00u;
    {
        const bool branch_taken_0x174f00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174F04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x174f00) {
            ctx->pc = 0x174F34u;
            goto label_174f34;
        }
    }
    ctx->pc = 0x174F08u;
label_174f08:
    // 0x174f08: 0x8c820000
    ctx->pc = 0x174f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174f0c:
    // 0x174f0c: 0x8c42002c
    ctx->pc = 0x174f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_174f10:
    // 0x174f10: 0x50400005
label_174f14:
    if (ctx->pc == 0x174F14u) {
        ctx->pc = 0x174F14u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174F18u;
        goto label_174f18;
    }
    ctx->pc = 0x174F10u;
    {
        const bool branch_taken_0x174f10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x174f10) {
            ctx->pc = 0x174F14u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x174F28u;
            goto label_174f28;
        }
    }
    ctx->pc = 0x174F18u;
label_174f18:
    // 0x174f18: 0x40f809
label_174f1c:
    if (ctx->pc == 0x174F1Cu) {
        ctx->pc = 0x174F1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x174F20u;
        goto label_174f20;
    }
    ctx->pc = 0x174F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174F20u);
        ctx->pc = 0x174F1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174EE8u: goto label_174ee8;
            case 0x174EECu: goto label_174eec;
            case 0x174EF0u: goto label_174ef0;
            case 0x174EF4u: goto label_174ef4;
            case 0x174EF8u: goto label_174ef8;
            case 0x174EFCu: goto label_174efc;
            case 0x174F00u: goto label_174f00;
            case 0x174F04u: goto label_174f04;
            case 0x174F08u: goto label_174f08;
            case 0x174F0Cu: goto label_174f0c;
            case 0x174F10u: goto label_174f10;
            case 0x174F14u: goto label_174f14;
            case 0x174F18u: goto label_174f18;
            case 0x174F1Cu: goto label_174f1c;
            case 0x174F20u: goto label_174f20;
            case 0x174F24u: goto label_174f24;
            case 0x174F28u: goto label_174f28;
            case 0x174F2Cu: goto label_174f2c;
            case 0x174F30u: goto label_174f30;
            case 0x174F34u: goto label_174f34;
            case 0x174F38u: goto label_174f38;
            case 0x174F3Cu: goto label_174f3c;
            case 0x174F40u: goto label_174f40;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174F20u; }
            if (ctx->pc != 0x174F20u) { return; }
        }
    }
    ctx->pc = 0x174F20u;
label_174f20:
    // 0x174f20: 0x10000003
label_174f24:
    if (ctx->pc == 0x174F24u) {
        ctx->pc = 0x174F24u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F28u;
        goto label_174f28;
    }
    ctx->pc = 0x174F20u;
    {
        const bool branch_taken_0x174f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174F24u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174f20) {
            ctx->pc = 0x174F30u;
            goto label_174f30;
        }
    }
    ctx->pc = 0x174F28u;
label_174f28:
    // 0x174f28: 0xc05d076
label_174f2c:
    if (ctx->pc == 0x174F2Cu) {
        ctx->pc = 0x174F2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944560));
        ctx->pc = 0x174F30u;
        goto label_174f30;
    }
    ctx->pc = 0x174F28u;
    SET_GPR_U32(ctx, 31, 0x174F30u);
    ctx->pc = 0x174F2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944560));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F30u; }
        else if (ctx->pc != 0x174F30u) { ctx->pc = 0x174F30u; }
    }
    if (ctx->pc != 0x174F30u) { return; }
    ctx->pc = 0x174F30u;
label_174f30:
    // 0x174f30: 0x200102d
    ctx->pc = 0x174f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174f34:
    // 0x174f34: 0xdfbf0010
    ctx->pc = 0x174f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174f38:
    // 0x174f38: 0xdfb00000
    ctx->pc = 0x174f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174f3c:
    // 0x174f3c: 0x3e00008
label_174f40:
    if (ctx->pc == 0x174F40u) {
        ctx->pc = 0x174F40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174F44u;
        goto label_fallthrough_0x174f3c;
    }
    ctx->pc = 0x174F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174EE0u: goto label_174ee0;
            case 0x174EE4u: goto label_174ee4;
            case 0x174EE8u: goto label_174ee8;
            case 0x174EECu: goto label_174eec;
            case 0x174EF0u: goto label_174ef0;
            case 0x174EF4u: goto label_174ef4;
            case 0x174EF8u: goto label_174ef8;
            case 0x174EFCu: goto label_174efc;
            case 0x174F00u: goto label_174f00;
            case 0x174F04u: goto label_174f04;
            case 0x174F08u: goto label_174f08;
            case 0x174F0Cu: goto label_174f0c;
            case 0x174F10u: goto label_174f10;
            case 0x174F14u: goto label_174f14;
            case 0x174F18u: goto label_174f18;
            case 0x174F1Cu: goto label_174f1c;
            case 0x174F20u: goto label_174f20;
            case 0x174F24u: goto label_174f24;
            case 0x174F28u: goto label_174f28;
            case 0x174F2Cu: goto label_174f2c;
            case 0x174F30u: goto label_174f30;
            case 0x174F34u: goto label_174f34;
            case 0x174F38u: goto label_174f38;
            case 0x174F3Cu: goto label_174f3c;
            case 0x174F40u: goto label_174f40;
            default: break;
        }
        return;
    }
label_fallthrough_0x174f3c:
    ctx->pc = 0x174F44u;
}
