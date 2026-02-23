#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsSeek
// Address: 0x174cf0 - 0x174d54
void cvFsSeek_0x174cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsSeek");


    ctx->pc = 0x174cf0u;

label_174cf0:
    // 0x174cf0: 0x27bdffe0
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_174cf4:
    // 0x174cf4: 0xffbf0010
    ctx->pc = 0x174cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174cf8:
    // 0x174cf8: 0x14800006
label_174cfc:
    if (ctx->pc == 0x174CFCu) {
        ctx->pc = 0x174CFCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x174D00u;
        goto label_174d00;
    }
    ctx->pc = 0x174CF8u;
    {
        const bool branch_taken_0x174cf8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x174CFCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x174cf8) {
            ctx->pc = 0x174D14u;
            goto label_174d14;
        }
    }
    ctx->pc = 0x174D00u;
label_174d00:
    // 0x174d00: 0x3c04002c
    ctx->pc = 0x174d00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174d04:
    // 0x174d04: 0xc05d076
label_174d08:
    if (ctx->pc == 0x174D08u) {
        ctx->pc = 0x174D08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944296));
        ctx->pc = 0x174D0Cu;
        goto label_174d0c;
    }
    ctx->pc = 0x174D04u;
    SET_GPR_U32(ctx, 31, 0x174D0Cu);
    ctx->pc = 0x174D08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944296));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D0Cu; }
        else if (ctx->pc != 0x174D0Cu) { ctx->pc = 0x174D0Cu; }
    }
    if (ctx->pc != 0x174D0Cu) { return; }
    ctx->pc = 0x174D0Cu;
label_174d0c:
    // 0x174d0c: 0x1000000d
label_174d10:
    if (ctx->pc == 0x174D10u) {
        ctx->pc = 0x174D10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174D14u;
        goto label_174d14;
    }
    ctx->pc = 0x174D0Cu;
    {
        const bool branch_taken_0x174d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174D10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174d0c) {
            ctx->pc = 0x174D44u;
            goto label_174d44;
        }
    }
    ctx->pc = 0x174D14u;
label_174d14:
    // 0x174d14: 0x8c820000
    ctx->pc = 0x174d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174d18:
    // 0x174d18: 0x8c420018
    ctx->pc = 0x174d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_174d1c:
    // 0x174d1c: 0x50400005
label_174d20:
    if (ctx->pc == 0x174D20u) {
        ctx->pc = 0x174D20u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174D24u;
        goto label_174d24;
    }
    ctx->pc = 0x174D1Cu;
    {
        const bool branch_taken_0x174d1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x174d1c) {
            ctx->pc = 0x174D20u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x174D34u;
            goto label_174d34;
        }
    }
    ctx->pc = 0x174D24u;
label_174d24:
    // 0x174d24: 0x40f809
label_174d28:
    if (ctx->pc == 0x174D28u) {
        ctx->pc = 0x174D28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x174D2Cu;
        goto label_174d2c;
    }
    ctx->pc = 0x174D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174D2Cu);
        ctx->pc = 0x174D28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174CF0u: goto label_174cf0;
            case 0x174CF4u: goto label_174cf4;
            case 0x174CF8u: goto label_174cf8;
            case 0x174CFCu: goto label_174cfc;
            case 0x174D00u: goto label_174d00;
            case 0x174D04u: goto label_174d04;
            case 0x174D08u: goto label_174d08;
            case 0x174D0Cu: goto label_174d0c;
            case 0x174D10u: goto label_174d10;
            case 0x174D14u: goto label_174d14;
            case 0x174D18u: goto label_174d18;
            case 0x174D1Cu: goto label_174d1c;
            case 0x174D20u: goto label_174d20;
            case 0x174D24u: goto label_174d24;
            case 0x174D28u: goto label_174d28;
            case 0x174D2Cu: goto label_174d2c;
            case 0x174D30u: goto label_174d30;
            case 0x174D34u: goto label_174d34;
            case 0x174D38u: goto label_174d38;
            case 0x174D3Cu: goto label_174d3c;
            case 0x174D40u: goto label_174d40;
            case 0x174D44u: goto label_174d44;
            case 0x174D48u: goto label_174d48;
            case 0x174D4Cu: goto label_174d4c;
            case 0x174D50u: goto label_174d50;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174D2Cu; }
            if (ctx->pc != 0x174D2Cu) { return; }
        }
    }
    ctx->pc = 0x174D2Cu;
label_174d2c:
    // 0x174d2c: 0x10000004
label_174d30:
    if (ctx->pc == 0x174D30u) {
        ctx->pc = 0x174D30u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174D34u;
        goto label_174d34;
    }
    ctx->pc = 0x174D2Cu;
    {
        const bool branch_taken_0x174d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174D30u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174d2c) {
            ctx->pc = 0x174D40u;
            goto label_174d40;
        }
    }
    ctx->pc = 0x174D34u;
label_174d34:
    // 0x174d34: 0x802d
    ctx->pc = 0x174d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d38:
    // 0x174d38: 0xc05d076
label_174d3c:
    if (ctx->pc == 0x174D3Cu) {
        ctx->pc = 0x174D3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944328));
        ctx->pc = 0x174D40u;
        goto label_174d40;
    }
    ctx->pc = 0x174D38u;
    SET_GPR_U32(ctx, 31, 0x174D40u);
    ctx->pc = 0x174D3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944328));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D40u; }
        else if (ctx->pc != 0x174D40u) { ctx->pc = 0x174D40u; }
    }
    if (ctx->pc != 0x174D40u) { return; }
    ctx->pc = 0x174D40u;
label_174d40:
    // 0x174d40: 0x200102d
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174d44:
    // 0x174d44: 0xdfbf0010
    ctx->pc = 0x174d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174d48:
    // 0x174d48: 0xdfb00000
    ctx->pc = 0x174d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174d4c:
    // 0x174d4c: 0x3e00008
label_174d50:
    if (ctx->pc == 0x174D50u) {
        ctx->pc = 0x174D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174D54u;
        goto label_fallthrough_0x174d4c;
    }
    ctx->pc = 0x174D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174CF0u: goto label_174cf0;
            case 0x174CF4u: goto label_174cf4;
            case 0x174CF8u: goto label_174cf8;
            case 0x174CFCu: goto label_174cfc;
            case 0x174D00u: goto label_174d00;
            case 0x174D04u: goto label_174d04;
            case 0x174D08u: goto label_174d08;
            case 0x174D0Cu: goto label_174d0c;
            case 0x174D10u: goto label_174d10;
            case 0x174D14u: goto label_174d14;
            case 0x174D18u: goto label_174d18;
            case 0x174D1Cu: goto label_174d1c;
            case 0x174D20u: goto label_174d20;
            case 0x174D24u: goto label_174d24;
            case 0x174D28u: goto label_174d28;
            case 0x174D2Cu: goto label_174d2c;
            case 0x174D30u: goto label_174d30;
            case 0x174D34u: goto label_174d34;
            case 0x174D38u: goto label_174d38;
            case 0x174D3Cu: goto label_174d3c;
            case 0x174D40u: goto label_174d40;
            case 0x174D44u: goto label_174d44;
            case 0x174D48u: goto label_174d48;
            case 0x174D4Cu: goto label_174d4c;
            case 0x174D50u: goto label_174d50;
            default: break;
        }
        return;
    }
label_fallthrough_0x174d4c:
    ctx->pc = 0x174D54u;
}
