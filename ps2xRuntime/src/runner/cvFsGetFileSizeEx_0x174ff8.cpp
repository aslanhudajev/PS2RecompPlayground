#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetFileSizeEx
// Address: 0x174ff8 - 0x1750b8
void cvFsGetFileSizeEx_0x174ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetFileSizeEx");


    ctx->pc = 0x174ff8u;

label_174ff8:
    // 0x174ff8: 0x27bdfd60
    ctx->pc = 0x174ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966624));
label_174ffc:
    // 0x174ffc: 0xffb20280
    ctx->pc = 0x174ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
label_175000:
    // 0x175000: 0xffb00260
    ctx->pc = 0x175000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_175004:
    // 0x175004: 0xa0902d
    ctx->pc = 0x175004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175008:
    // 0x175008: 0xffbf0290
    ctx->pc = 0x175008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
label_17500c:
    // 0x17500c: 0x80802d
    ctx->pc = 0x17500cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175010:
    // 0x175010: 0x16000004
label_175014:
    if (ctx->pc == 0x175014u) {
        ctx->pc = 0x175014u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        ctx->pc = 0x175018u;
        goto label_175018;
    }
    ctx->pc = 0x175010u;
    {
        const bool branch_taken_0x175010 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175014u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        if (branch_taken_0x175010) {
            ctx->pc = 0x175024u;
            goto label_175024;
        }
    }
    ctx->pc = 0x175018u;
label_175018:
    // 0x175018: 0x3c04002c
    ctx->pc = 0x175018u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17501c:
    // 0x17501c: 0x1000001a
label_175020:
    if (ctx->pc == 0x175020u) {
        ctx->pc = 0x175020u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944744));
        ctx->pc = 0x175024u;
        goto label_175024;
    }
    ctx->pc = 0x17501Cu;
    {
        const bool branch_taken_0x17501c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175020u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944744));
        if (branch_taken_0x17501c) {
            ctx->pc = 0x175088u;
            goto label_175088;
        }
    }
    ctx->pc = 0x175024u;
label_175024:
    // 0x175024: 0x27b10130
    ctx->pc = 0x175024u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 304));
label_175028:
    // 0x175028: 0x3a0202d
    ctx->pc = 0x175028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17502c:
    // 0x17502c: 0x220282d
    ctx->pc = 0x17502cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175030:
    // 0x175030: 0xc05d296
label_175034:
    if (ctx->pc == 0x175034u) {
        ctx->pc = 0x175034u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175038u;
        goto label_175038;
    }
    ctx->pc = 0x175030u;
    SET_GPR_U32(ctx, 31, 0x175038u);
    ctx->pc = 0x175034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175038u; }
        else if (ctx->pc != 0x175038u) { ctx->pc = 0x175038u; }
    }
    if (ctx->pc != 0x175038u) { return; }
    ctx->pc = 0x175038u;
label_175038:
    // 0x175038: 0x83a20130
    ctx->pc = 0x175038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_17503c:
    // 0x17503c: 0x14400004
label_175040:
    if (ctx->pc == 0x175040u) {
        ctx->pc = 0x175040u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175044u;
        goto label_175044;
    }
    ctx->pc = 0x17503Cu;
    {
        const bool branch_taken_0x17503c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x175040u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17503c) {
            ctx->pc = 0x175050u;
            goto label_175050;
        }
    }
    ctx->pc = 0x175044u;
label_175044:
    // 0x175044: 0x3c04002c
    ctx->pc = 0x175044u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175048:
    // 0x175048: 0x1000000f
label_17504c:
    if (ctx->pc == 0x17504Cu) {
        ctx->pc = 0x17504Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944744));
        ctx->pc = 0x175050u;
        goto label_175050;
    }
    ctx->pc = 0x175048u;
    {
        const bool branch_taken_0x175048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17504Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944744));
        if (branch_taken_0x175048) {
            ctx->pc = 0x175088u;
            goto label_175088;
        }
    }
    ctx->pc = 0x175050u;
label_175050:
    // 0x175050: 0x3a0202d
    ctx->pc = 0x175050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175054:
    // 0x175054: 0xc05d208
label_175058:
    if (ctx->pc == 0x175058u) {
        ctx->pc = 0x175058u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17505Cu;
        goto label_17505c;
    }
    ctx->pc = 0x175054u;
    SET_GPR_U32(ctx, 31, 0x17505Cu);
    ctx->pc = 0x175058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17505Cu; }
        else if (ctx->pc != 0x17505Cu) { ctx->pc = 0x17505Cu; }
    }
    if (ctx->pc != 0x17505Cu) { return; }
    ctx->pc = 0x17505Cu;
label_17505c:
    // 0x17505c: 0x40802d
    ctx->pc = 0x17505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175060:
    // 0x175060: 0x56000005
label_175064:
    if (ctx->pc == 0x175064u) {
        ctx->pc = 0x175064u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x175068u;
        goto label_175068;
    }
    ctx->pc = 0x175060u;
    {
        const bool branch_taken_0x175060 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x175060) {
            ctx->pc = 0x175064u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->pc = 0x175078u;
            goto label_175078;
        }
    }
    ctx->pc = 0x175068u;
label_175068:
    // 0x175068: 0x3c04002c
    ctx->pc = 0x175068u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17506c:
    // 0x17506c: 0xc05d076
label_175070:
    if (ctx->pc == 0x175070u) {
        ctx->pc = 0x175070u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944832));
        ctx->pc = 0x175074u;
        goto label_175074;
    }
    ctx->pc = 0x17506Cu;
    SET_GPR_U32(ctx, 31, 0x175074u);
    ctx->pc = 0x175070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944832));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175074u; }
        else if (ctx->pc != 0x175074u) { ctx->pc = 0x175074u; }
    }
    if (ctx->pc != 0x175074u) { return; }
    ctx->pc = 0x175074u;
label_175074:
    // 0x175074: 0x8e02005c
    ctx->pc = 0x175074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_175078:
    // 0x175078: 0x14400007
label_17507c:
    if (ctx->pc == 0x17507Cu) {
        ctx->pc = 0x17507Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175080u;
        goto label_175080;
    }
    ctx->pc = 0x175078u;
    {
        const bool branch_taken_0x175078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17507Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175078) {
            ctx->pc = 0x175098u;
            goto label_175098;
        }
    }
    ctx->pc = 0x175080u;
label_175080:
    // 0x175080: 0x3c04002c
    ctx->pc = 0x175080u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175084:
    // 0x175084: 0x2484a868
    ctx->pc = 0x175084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944872));
label_175088:
    // 0x175088: 0xc05d076
label_17508c:
    if (ctx->pc == 0x17508Cu) {
        ctx->pc = 0x175090u;
        goto label_175090;
    }
    ctx->pc = 0x175088u;
    SET_GPR_U32(ctx, 31, 0x175090u);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175090u; }
        else if (ctx->pc != 0x175090u) { ctx->pc = 0x175090u; }
    }
    if (ctx->pc != 0x175090u) { return; }
    ctx->pc = 0x175090u;
label_175090:
    // 0x175090: 0x10000003
label_175094:
    if (ctx->pc == 0x175094u) {
        ctx->pc = 0x175094u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175098u;
        goto label_175098;
    }
    ctx->pc = 0x175090u;
    {
        const bool branch_taken_0x175090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175094u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175090) {
            ctx->pc = 0x1750A0u;
            goto label_1750a0;
        }
    }
    ctx->pc = 0x175098u;
label_175098:
    // 0x175098: 0x40f809
label_17509c:
    if (ctx->pc == 0x17509Cu) {
        ctx->pc = 0x17509Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1750A0u;
        goto label_1750a0;
    }
    ctx->pc = 0x175098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1750A0u);
        ctx->pc = 0x17509Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174FF8u: goto label_174ff8;
            case 0x174FFCu: goto label_174ffc;
            case 0x175000u: goto label_175000;
            case 0x175004u: goto label_175004;
            case 0x175008u: goto label_175008;
            case 0x17500Cu: goto label_17500c;
            case 0x175010u: goto label_175010;
            case 0x175014u: goto label_175014;
            case 0x175018u: goto label_175018;
            case 0x17501Cu: goto label_17501c;
            case 0x175020u: goto label_175020;
            case 0x175024u: goto label_175024;
            case 0x175028u: goto label_175028;
            case 0x17502Cu: goto label_17502c;
            case 0x175030u: goto label_175030;
            case 0x175034u: goto label_175034;
            case 0x175038u: goto label_175038;
            case 0x17503Cu: goto label_17503c;
            case 0x175040u: goto label_175040;
            case 0x175044u: goto label_175044;
            case 0x175048u: goto label_175048;
            case 0x17504Cu: goto label_17504c;
            case 0x175050u: goto label_175050;
            case 0x175054u: goto label_175054;
            case 0x175058u: goto label_175058;
            case 0x17505Cu: goto label_17505c;
            case 0x175060u: goto label_175060;
            case 0x175064u: goto label_175064;
            case 0x175068u: goto label_175068;
            case 0x17506Cu: goto label_17506c;
            case 0x175070u: goto label_175070;
            case 0x175074u: goto label_175074;
            case 0x175078u: goto label_175078;
            case 0x17507Cu: goto label_17507c;
            case 0x175080u: goto label_175080;
            case 0x175084u: goto label_175084;
            case 0x175088u: goto label_175088;
            case 0x17508Cu: goto label_17508c;
            case 0x175090u: goto label_175090;
            case 0x175094u: goto label_175094;
            case 0x175098u: goto label_175098;
            case 0x17509Cu: goto label_17509c;
            case 0x1750A0u: goto label_1750a0;
            case 0x1750A4u: goto label_1750a4;
            case 0x1750A8u: goto label_1750a8;
            case 0x1750ACu: goto label_1750ac;
            case 0x1750B0u: goto label_1750b0;
            case 0x1750B4u: goto label_1750b4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1750A0u; }
            if (ctx->pc != 0x1750A0u) { return; }
        }
    }
    ctx->pc = 0x1750A0u;
label_1750a0:
    // 0x1750a0: 0xdfbf0290
    ctx->pc = 0x1750a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_1750a4:
    // 0x1750a4: 0xdfb20280
    ctx->pc = 0x1750a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1750a8:
    // 0x1750a8: 0xdfb10270
    ctx->pc = 0x1750a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1750ac:
    // 0x1750ac: 0xdfb00260
    ctx->pc = 0x1750acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1750b0:
    // 0x1750b0: 0x3e00008
label_1750b4:
    if (ctx->pc == 0x1750B4u) {
        ctx->pc = 0x1750B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x1750B8u;
        goto label_fallthrough_0x1750b0;
    }
    ctx->pc = 0x1750B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1750B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174FF8u: goto label_174ff8;
            case 0x174FFCu: goto label_174ffc;
            case 0x175000u: goto label_175000;
            case 0x175004u: goto label_175004;
            case 0x175008u: goto label_175008;
            case 0x17500Cu: goto label_17500c;
            case 0x175010u: goto label_175010;
            case 0x175014u: goto label_175014;
            case 0x175018u: goto label_175018;
            case 0x17501Cu: goto label_17501c;
            case 0x175020u: goto label_175020;
            case 0x175024u: goto label_175024;
            case 0x175028u: goto label_175028;
            case 0x17502Cu: goto label_17502c;
            case 0x175030u: goto label_175030;
            case 0x175034u: goto label_175034;
            case 0x175038u: goto label_175038;
            case 0x17503Cu: goto label_17503c;
            case 0x175040u: goto label_175040;
            case 0x175044u: goto label_175044;
            case 0x175048u: goto label_175048;
            case 0x17504Cu: goto label_17504c;
            case 0x175050u: goto label_175050;
            case 0x175054u: goto label_175054;
            case 0x175058u: goto label_175058;
            case 0x17505Cu: goto label_17505c;
            case 0x175060u: goto label_175060;
            case 0x175064u: goto label_175064;
            case 0x175068u: goto label_175068;
            case 0x17506Cu: goto label_17506c;
            case 0x175070u: goto label_175070;
            case 0x175074u: goto label_175074;
            case 0x175078u: goto label_175078;
            case 0x17507Cu: goto label_17507c;
            case 0x175080u: goto label_175080;
            case 0x175084u: goto label_175084;
            case 0x175088u: goto label_175088;
            case 0x17508Cu: goto label_17508c;
            case 0x175090u: goto label_175090;
            case 0x175094u: goto label_175094;
            case 0x175098u: goto label_175098;
            case 0x17509Cu: goto label_17509c;
            case 0x1750A0u: goto label_1750a0;
            case 0x1750A4u: goto label_1750a4;
            case 0x1750A8u: goto label_1750a8;
            case 0x1750ACu: goto label_1750ac;
            case 0x1750B0u: goto label_1750b0;
            case 0x1750B4u: goto label_1750b4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1750b0:
    ctx->pc = 0x1750B8u;
}
