#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetOutPan
// Address: 0x190ff8 - 0x19106c
void SFD_GetOutPan_0x190ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetOutPan");


    ctx->pc = 0x190ff8u;

label_190ff8:
    // 0x190ff8: 0x27bdffd0
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_190ffc:
    // 0x190ffc: 0xffb00000
    ctx->pc = 0x190ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191000:
    // 0x191000: 0xffb10010
    ctx->pc = 0x191000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_191004:
    // 0x191004: 0x80802d
    ctx->pc = 0x191004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191008:
    // 0x191008: 0xffbf0020
    ctx->pc = 0x191008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19100c:
    // 0x19100c: 0xc064f1e
label_191010:
    if (ctx->pc == 0x191010u) {
        ctx->pc = 0x191010u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191014u;
        goto label_191014;
    }
    ctx->pc = 0x19100Cu;
    SET_GPR_U32(ctx, 31, 0x191014u);
    ctx->pc = 0x191010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191014u; }
        else if (ctx->pc != 0x191014u) { ctx->pc = 0x191014u; }
    }
    if (ctx->pc != 0x191014u) { return; }
    ctx->pc = 0x191014u;
label_191014:
    // 0x191014: 0x10400006
label_191018:
    if (ctx->pc == 0x191018u) {
        ctx->pc = 0x191018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19101Cu;
        goto label_19101c;
    }
    ctx->pc = 0x191014u;
    {
        const bool branch_taken_0x191014 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191014) {
            ctx->pc = 0x191030u;
            goto label_191030;
        }
    }
    ctx->pc = 0x19101Cu;
label_19101c:
    // 0x19101c: 0x3c05ff00
    ctx->pc = 0x19101cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_191020:
    // 0x191020: 0xc064ea0
label_191024:
    if (ctx->pc == 0x191024u) {
        ctx->pc = 0x191024u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 418));
        ctx->pc = 0x191028u;
        goto label_191028;
    }
    ctx->pc = 0x191020u;
    SET_GPR_U32(ctx, 31, 0x191028u);
    ctx->pc = 0x191024u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 418));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191028u; }
        else if (ctx->pc != 0x191028u) { ctx->pc = 0x191028u; }
    }
    if (ctx->pc != 0x191028u) { return; }
    ctx->pc = 0x191028u;
label_191028:
    // 0x191028: 0x1000000b
label_19102c:
    if (ctx->pc == 0x19102Cu) {
        ctx->pc = 0x19102Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191030u;
        goto label_191030;
    }
    ctx->pc = 0x191028u;
    {
        const bool branch_taken_0x191028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19102Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191028) {
            ctx->pc = 0x191058u;
            goto label_191058;
        }
    }
    ctx->pc = 0x191030u;
label_191030:
    // 0x191030: 0x200202d
    ctx->pc = 0x191030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191034:
    // 0x191034: 0xc0674c2
label_191038:
    if (ctx->pc == 0x191038u) {
        ctx->pc = 0x191038u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x19103Cu;
        goto label_19103c;
    }
    ctx->pc = 0x191034u;
    SET_GPR_U32(ctx, 31, 0x19103Cu);
    ctx->pc = 0x191038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19103Cu; }
        else if (ctx->pc != 0x19103Cu) { ctx->pc = 0x19103Cu; }
    }
    if (ctx->pc != 0x19103Cu) { return; }
    ctx->pc = 0x19103Cu;
label_19103c:
    // 0x19103c: 0x54400003
label_191040:
    if (ctx->pc == 0x191040u) {
        ctx->pc = 0x191040u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 22952)));
        ctx->pc = 0x191044u;
        goto label_191044;
    }
    ctx->pc = 0x19103Cu;
    {
        const bool branch_taken_0x19103c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19103c) {
            ctx->pc = 0x191040u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 22952)));
            ctx->pc = 0x19104Cu;
            goto label_19104c;
        }
    }
    ctx->pc = 0x191044u;
label_191044:
    // 0x191044: 0x10000004
label_191048:
    if (ctx->pc == 0x191048u) {
        ctx->pc = 0x191048u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19104Cu;
        goto label_19104c;
    }
    ctx->pc = 0x191044u;
    {
        const bool branch_taken_0x191044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191048u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191044) {
            ctx->pc = 0x191058u;
            goto label_191058;
        }
    }
    ctx->pc = 0x19104Cu;
label_19104c:
    // 0x19104c: 0x200202d
    ctx->pc = 0x19104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191050:
    // 0x191050: 0x40f809
label_191054:
    if (ctx->pc == 0x191054u) {
        ctx->pc = 0x191054u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191058u;
        goto label_191058;
    }
    ctx->pc = 0x191050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191058u);
        ctx->pc = 0x191054u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190FF8u: goto label_190ff8;
            case 0x190FFCu: goto label_190ffc;
            case 0x191000u: goto label_191000;
            case 0x191004u: goto label_191004;
            case 0x191008u: goto label_191008;
            case 0x19100Cu: goto label_19100c;
            case 0x191010u: goto label_191010;
            case 0x191014u: goto label_191014;
            case 0x191018u: goto label_191018;
            case 0x19101Cu: goto label_19101c;
            case 0x191020u: goto label_191020;
            case 0x191024u: goto label_191024;
            case 0x191028u: goto label_191028;
            case 0x19102Cu: goto label_19102c;
            case 0x191030u: goto label_191030;
            case 0x191034u: goto label_191034;
            case 0x191038u: goto label_191038;
            case 0x19103Cu: goto label_19103c;
            case 0x191040u: goto label_191040;
            case 0x191044u: goto label_191044;
            case 0x191048u: goto label_191048;
            case 0x19104Cu: goto label_19104c;
            case 0x191050u: goto label_191050;
            case 0x191054u: goto label_191054;
            case 0x191058u: goto label_191058;
            case 0x19105Cu: goto label_19105c;
            case 0x191060u: goto label_191060;
            case 0x191064u: goto label_191064;
            case 0x191068u: goto label_191068;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191058u; }
            if (ctx->pc != 0x191058u) { return; }
        }
    }
    ctx->pc = 0x191058u;
label_191058:
    // 0x191058: 0xdfbf0020
    ctx->pc = 0x191058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19105c:
    // 0x19105c: 0xdfb10010
    ctx->pc = 0x19105cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_191060:
    // 0x191060: 0xdfb00000
    ctx->pc = 0x191060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191064:
    // 0x191064: 0x3e00008
label_191068:
    if (ctx->pc == 0x191068u) {
        ctx->pc = 0x191068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x19106Cu;
        goto label_fallthrough_0x191064;
    }
    ctx->pc = 0x191064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190FF8u: goto label_190ff8;
            case 0x190FFCu: goto label_190ffc;
            case 0x191000u: goto label_191000;
            case 0x191004u: goto label_191004;
            case 0x191008u: goto label_191008;
            case 0x19100Cu: goto label_19100c;
            case 0x191010u: goto label_191010;
            case 0x191014u: goto label_191014;
            case 0x191018u: goto label_191018;
            case 0x19101Cu: goto label_19101c;
            case 0x191020u: goto label_191020;
            case 0x191024u: goto label_191024;
            case 0x191028u: goto label_191028;
            case 0x19102Cu: goto label_19102c;
            case 0x191030u: goto label_191030;
            case 0x191034u: goto label_191034;
            case 0x191038u: goto label_191038;
            case 0x19103Cu: goto label_19103c;
            case 0x191040u: goto label_191040;
            case 0x191044u: goto label_191044;
            case 0x191048u: goto label_191048;
            case 0x19104Cu: goto label_19104c;
            case 0x191050u: goto label_191050;
            case 0x191054u: goto label_191054;
            case 0x191058u: goto label_191058;
            case 0x19105Cu: goto label_19105c;
            case 0x191060u: goto label_191060;
            case 0x191064u: goto label_191064;
            case 0x191068u: goto label_191068;
            default: break;
        }
        return;
    }
label_fallthrough_0x191064:
    ctx->pc = 0x19106Cu;
}
