#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_01__11MotMgrClassFP11DATAENT_REQ
// Address: 0x1fc1e0 - 0x1fc2b4
void entryExec_STAT_01__11MotMgrClassFP11DATAENT_REQ_0x1fc1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_01__11MotMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fc1e0u;

    // 0x1fc1e0: 0x27bdffd0
    ctx->pc = 0x1fc1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc1e4: 0x7fbf0020
    ctx->pc = 0x1fc1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fc1e8: 0x7fb10010
    ctx->pc = 0x1fc1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc1ec: 0x7fb00000
    ctx->pc = 0x1fc1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc1f0: 0x3c010052
    ctx->pc = 0x1fc1f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc1f4: 0x8c229434
    ctx->pc = 0x1fc1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939700)));
    // 0x1fc1f8: 0x70a08e28
    ctx->pc = 0x1fc1f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fc1fc: 0x14400020
    ctx->pc = 0x1FC1FCu;
    {
        const bool branch_taken_0x1fc1fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FC200u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fc1fc) {
            ctx->pc = 0x1FC280u;
            goto label_1fc280;
        }
    }
    ctx->pc = 0x1FC204u;
    // 0x1fc204: 0x3c010050
    ctx->pc = 0x1fc204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc208: 0xc05b018
    ctx->pc = 0x1FC208u;
    SET_GPR_U32(ctx, 31, 0x1FC210u);
    ctx->pc = 0x1FC20Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC210u; }
        else if (ctx->pc != 0x1FC210u) { ctx->pc = 0x1FC210u; }
    }
    if (ctx->pc != 0x1FC210u) { return; }
    ctx->pc = 0x1FC210u;
    // 0x1fc210: 0x24030004
    ctx->pc = 0x1fc210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc214: 0x1443000f
    ctx->pc = 0x1FC214u;
    {
        const bool branch_taken_0x1fc214 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FC218u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fc214) {
            ctx->pc = 0x1FC254u;
            goto label_1fc254;
        }
    }
    ctx->pc = 0x1FC21Cu;
    // 0x1fc21c: 0x3c010052
    ctx->pc = 0x1fc21cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc220: 0x8c269420
    ctx->pc = 0x1fc220u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939680)));
    // 0x1fc224: 0x8f828d10
    ctx->pc = 0x1fc224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1fc228: 0x3c010050
    ctx->pc = 0x1fc228u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc22c: 0x8c240c70
    ctx->pc = 0x1fc22cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    // 0x1fc230: 0x24420001
    ctx->pc = 0x1fc230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc234: 0x3c010052
    ctx->pc = 0x1fc234u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc238: 0x8c259430
    ctx->pc = 0x1fc238u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939696)));
    // 0x1fc23c: 0xc05aeba
    ctx->pc = 0x1FC23Cu;
    SET_GPR_U32(ctx, 31, 0x1FC244u);
    ctx->pc = 0x1FC240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC244u; }
        else if (ctx->pc != 0x1FC244u) { ctx->pc = 0x1FC244u; }
    }
    if (ctx->pc != 0x1FC244u) { return; }
    ctx->pc = 0x1FC244u;
    // 0x1fc244: 0x3c010050
    ctx->pc = 0x1fc244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc248: 0xc05b018
    ctx->pc = 0x1FC248u;
    SET_GPR_U32(ctx, 31, 0x1FC250u);
    ctx->pc = 0x1FC24Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC250u; }
        else if (ctx->pc != 0x1FC250u) { ctx->pc = 0x1FC250u; }
    }
    if (ctx->pc != 0x1FC250u) { return; }
    ctx->pc = 0x1FC250u;
    // 0x1fc250: 0x24030001
    ctx->pc = 0x1fc250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1fc254:
    // 0x1fc254: 0x10430004
    ctx->pc = 0x1FC254u;
    {
        const bool branch_taken_0x1fc254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FC258u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1fc254) {
            ctx->pc = 0x1FC268u;
            goto label_1fc268;
        }
    }
    ctx->pc = 0x1FC25Cu;
    // 0x1fc25c: 0x24030003
    ctx->pc = 0x1fc25cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fc260: 0x1443000b
    ctx->pc = 0x1FC260u;
    {
        const bool branch_taken_0x1fc260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fc260) {
            ctx->pc = 0x1FC290u;
            goto label_1fc290;
        }
    }
    ctx->pc = 0x1FC268u;
label_1fc268:
    // 0x1fc268: 0xc05ae0c
    ctx->pc = 0x1FC268u;
    SET_GPR_U32(ctx, 31, 0x1FC270u);
    ctx->pc = 0x1FC26Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC270u; }
        else if (ctx->pc != 0x1FC270u) { ctx->pc = 0x1FC270u; }
    }
    if (ctx->pc != 0x1FC270u) { return; }
    ctx->pc = 0x1FC270u;
    // 0x1fc270: 0x3c010050
    ctx->pc = 0x1fc270u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc274: 0xac200c70
    ctx->pc = 0x1fc274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3184), GPR_U32(ctx, 0));
    // 0x1fc278: 0x10000005
    ctx->pc = 0x1FC278u;
    {
        const bool branch_taken_0x1fc278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC27Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fc278) {
            ctx->pc = 0x1FC290u;
            goto label_1fc290;
        }
    }
    ctx->pc = 0x1FC280u;
label_1fc280:
    // 0x1fc280: 0x8f828b38
    ctx->pc = 0x1fc280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x1fc284: 0x14400002
    ctx->pc = 0x1FC284u;
    {
        const bool branch_taken_0x1fc284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fc284) {
            ctx->pc = 0x1FC290u;
            goto label_1fc290;
        }
    }
    ctx->pc = 0x1FC28Cu;
    // 0x1fc28c: 0x24100001
    ctx->pc = 0x1fc28cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1fc290:
    // 0x1fc290: 0x12000002
    ctx->pc = 0x1FC290u;
    {
        const bool branch_taken_0x1fc290 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC294u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1fc290) {
            ctx->pc = 0x1FC29Cu;
            goto label_1fc29c;
        }
    }
    ctx->pc = 0x1FC298u;
    // 0x1fc298: 0xae22000c
    ctx->pc = 0x1fc298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1fc29c:
    // 0x1fc29c: 0x7bbf0020
    ctx->pc = 0x1fc29cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc2a0: 0x7bb10010
    ctx->pc = 0x1fc2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc2a4: 0x7bb00000
    ctx->pc = 0x1fc2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc2a8: 0x24020001
    ctx->pc = 0x1fc2a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc2ac: 0x3e00008
    ctx->pc = 0x1FC2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC2B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC254u: goto label_1fc254;
            case 0x1FC268u: goto label_1fc268;
            case 0x1FC280u: goto label_1fc280;
            case 0x1FC290u: goto label_1fc290;
            case 0x1FC29Cu: goto label_1fc29c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC2B4u;
}
