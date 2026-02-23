#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwlSfdExecDecSvrPlaying
// Address: 0x18d0e8 - 0x18d18c
void mwlSfdExecDecSvrPlaying_0x18d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwlSfdExecDecSvrPlaying");


    ctx->pc = 0x18d0e8u;

label_18d0e8:
    // 0x18d0e8: 0x27bdffc0
    ctx->pc = 0x18d0e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_18d0ec:
    // 0x18d0ec: 0x24030001
    ctx->pc = 0x18d0ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_18d0f0:
    // 0x18d0f0: 0xffb10010
    ctx->pc = 0x18d0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_18d0f4:
    // 0x18d0f4: 0xffbf0030
    ctx->pc = 0x18d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18d0f8:
    // 0x18d0f8: 0x80882d
    ctx->pc = 0x18d0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d0fc:
    // 0x18d0fc: 0xffb20020
    ctx->pc = 0x18d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_18d100:
    // 0x18d100: 0xffb00000
    ctx->pc = 0x18d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18d104:
    // 0x18d104: 0x8222007d
    ctx->pc = 0x18d104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 125)));
label_18d108:
    // 0x18d108: 0x14430014
label_18d10c:
    if (ctx->pc == 0x18D10Cu) {
        ctx->pc = 0x18D10Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x18D110u;
        goto label_18d110;
    }
    ctx->pc = 0x18D108u;
    {
        const bool branch_taken_0x18d108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18D10Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 48)));
        if (branch_taken_0x18d108) {
            ctx->pc = 0x18D15Cu;
            goto label_18d15c;
        }
    }
    ctx->pc = 0x18D110u;
label_18d110:
    // 0x18d110: 0x8e240080
    ctx->pc = 0x18d110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_18d114:
    // 0x18d114: 0xc05e8e6
label_18d118:
    if (ctx->pc == 0x18D118u) {
        ctx->pc = 0x18D118u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x18D11Cu;
        goto label_18d11c;
    }
    ctx->pc = 0x18D114u;
    SET_GPR_U32(ctx, 31, 0x18D11Cu);
    ctx->pc = 0x18D118u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->pc = 0x17A398u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_GetNumStm_0x17a398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D11Cu; }
        else if (ctx->pc != 0x18D11Cu) { ctx->pc = 0x18D11Cu; }
    }
    if (ctx->pc != 0x18D11Cu) { return; }
    ctx->pc = 0x18D11Cu;
label_18d11c:
    // 0x18d11c: 0x1440000f
label_18d120:
    if (ctx->pc == 0x18D120u) {
        ctx->pc = 0x18D120u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D124u;
        goto label_18d124;
    }
    ctx->pc = 0x18D11Cu;
    {
        const bool branch_taken_0x18d11c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D120u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d11c) {
            ctx->pc = 0x18D15Cu;
            goto label_18d15c;
        }
    }
    ctx->pc = 0x18D124u;
label_18d124:
    // 0x18d124: 0x8e030000
    ctx->pc = 0x18d124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18d128:
    // 0x18d128: 0x8c620024
    ctx->pc = 0x18d128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_18d12c:
    // 0x18d12c: 0x40f809
label_18d130:
    if (ctx->pc == 0x18D130u) {
        ctx->pc = 0x18D130u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x18D134u;
        goto label_18d134;
    }
    ctx->pc = 0x18D12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D134u);
        ctx->pc = 0x18D130u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D0E8u: goto label_18d0e8;
            case 0x18D0ECu: goto label_18d0ec;
            case 0x18D0F0u: goto label_18d0f0;
            case 0x18D0F4u: goto label_18d0f4;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D0FCu: goto label_18d0fc;
            case 0x18D100u: goto label_18d100;
            case 0x18D104u: goto label_18d104;
            case 0x18D108u: goto label_18d108;
            case 0x18D10Cu: goto label_18d10c;
            case 0x18D110u: goto label_18d110;
            case 0x18D114u: goto label_18d114;
            case 0x18D118u: goto label_18d118;
            case 0x18D11Cu: goto label_18d11c;
            case 0x18D120u: goto label_18d120;
            case 0x18D124u: goto label_18d124;
            case 0x18D128u: goto label_18d128;
            case 0x18D12Cu: goto label_18d12c;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D138u: goto label_18d138;
            case 0x18D13Cu: goto label_18d13c;
            case 0x18D140u: goto label_18d140;
            case 0x18D144u: goto label_18d144;
            case 0x18D148u: goto label_18d148;
            case 0x18D14Cu: goto label_18d14c;
            case 0x18D150u: goto label_18d150;
            case 0x18D154u: goto label_18d154;
            case 0x18D158u: goto label_18d158;
            case 0x18D15Cu: goto label_18d15c;
            case 0x18D160u: goto label_18d160;
            case 0x18D164u: goto label_18d164;
            case 0x18D168u: goto label_18d168;
            case 0x18D16Cu: goto label_18d16c;
            case 0x18D170u: goto label_18d170;
            case 0x18D174u: goto label_18d174;
            case 0x18D178u: goto label_18d178;
            case 0x18D17Cu: goto label_18d17c;
            case 0x18D180u: goto label_18d180;
            case 0x18D184u: goto label_18d184;
            case 0x18D188u: goto label_18d188;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D134u; }
            if (ctx->pc != 0x18D134u) { return; }
        }
    }
    ctx->pc = 0x18D134u;
label_18d134:
    // 0x18d134: 0x28420004
    ctx->pc = 0x18d134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_18d138:
    // 0x18d138: 0x10400008
label_18d13c:
    if (ctx->pc == 0x18D13Cu) {
        ctx->pc = 0x18D140u;
        goto label_18d140;
    }
    ctx->pc = 0x18D138u;
    {
        const bool branch_taken_0x18d138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d138) {
            ctx->pc = 0x18D15Cu;
            goto label_18d15c;
        }
    }
    ctx->pc = 0x18D140u;
label_18d140:
    // 0x18d140: 0xc066f6e
label_18d144:
    if (ctx->pc == 0x18D144u) {
        ctx->pc = 0x18D144u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D148u;
        goto label_18d148;
    }
    ctx->pc = 0x18D140u;
    SET_GPR_U32(ctx, 31, 0x18D148u);
    ctx->pc = 0x18D144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BDB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_TermSupply_0x19bdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D148u; }
        else if (ctx->pc != 0x18D148u) { ctx->pc = 0x18D148u; }
    }
    if (ctx->pc != 0x18D148u) { return; }
    ctx->pc = 0x18D148u;
label_18d148:
    // 0x18d148: 0x10400003
label_18d14c:
    if (ctx->pc == 0x18D14Cu) {
        ctx->pc = 0x18D14Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x18D150u;
        goto label_18d150;
    }
    ctx->pc = 0x18D148u;
    {
        const bool branch_taken_0x18d148 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D14Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18d148) {
            ctx->pc = 0x18D158u;
            goto label_18d158;
        }
    }
    ctx->pc = 0x18D150u;
label_18d150:
    // 0x18d150: 0xc063dda
label_18d154:
    if (ctx->pc == 0x18D154u) {
        ctx->pc = 0x18D154u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954400));
        ctx->pc = 0x18D158u;
        goto label_18d158;
    }
    ctx->pc = 0x18D150u;
    SET_GPR_U32(ctx, 31, 0x18D158u);
    ctx->pc = 0x18D154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954400));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D158u; }
        else if (ctx->pc != 0x18D158u) { ctx->pc = 0x18D158u; }
    }
    if (ctx->pc != 0x18D158u) { return; }
    ctx->pc = 0x18D158u;
label_18d158:
    // 0x18d158: 0xa220007d
    ctx->pc = 0x18d158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 125), (uint8_t)GPR_U32(ctx, 0));
label_18d15c:
    // 0x18d15c: 0xc06740e
label_18d160:
    if (ctx->pc == 0x18D160u) {
        ctx->pc = 0x18D160u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D164u;
        goto label_18d164;
    }
    ctx->pc = 0x18D15Cu;
    SET_GPR_U32(ctx, 31, 0x18D164u);
    ctx->pc = 0x18D160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D038u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetHnStat_0x19d038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D164u; }
        else if (ctx->pc != 0x18D164u) { ctx->pc = 0x18D164u; }
    }
    if (ctx->pc != 0x18D164u) { return; }
    ctx->pc = 0x18D164u;
label_18d164:
    // 0x18d164: 0x24030006
    ctx->pc = 0x18d164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_18d168:
    // 0x18d168: 0x14430003
label_18d16c:
    if (ctx->pc == 0x18D16Cu) {
        ctx->pc = 0x18D16Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x18D170u;
        goto label_18d170;
    }
    ctx->pc = 0x18D168u;
    {
        const bool branch_taken_0x18d168 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18D16Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x18d168) {
            ctx->pc = 0x18D178u;
            goto label_18d178;
        }
    }
    ctx->pc = 0x18D170u;
label_18d170:
    // 0x18d170: 0x24020003
    ctx->pc = 0x18d170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_18d174:
    // 0x18d174: 0xae220008
    ctx->pc = 0x18d174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_18d178:
    // 0x18d178: 0xdfb20020
    ctx->pc = 0x18d178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d17c:
    // 0x18d17c: 0xdfb10010
    ctx->pc = 0x18d17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d180:
    // 0x18d180: 0xdfb00000
    ctx->pc = 0x18d180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d184:
    // 0x18d184: 0x3e00008
label_18d188:
    if (ctx->pc == 0x18D188u) {
        ctx->pc = 0x18D188u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x18D18Cu;
        goto label_fallthrough_0x18d184;
    }
    ctx->pc = 0x18D184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D188u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D0E8u: goto label_18d0e8;
            case 0x18D0ECu: goto label_18d0ec;
            case 0x18D0F0u: goto label_18d0f0;
            case 0x18D0F4u: goto label_18d0f4;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D0FCu: goto label_18d0fc;
            case 0x18D100u: goto label_18d100;
            case 0x18D104u: goto label_18d104;
            case 0x18D108u: goto label_18d108;
            case 0x18D10Cu: goto label_18d10c;
            case 0x18D110u: goto label_18d110;
            case 0x18D114u: goto label_18d114;
            case 0x18D118u: goto label_18d118;
            case 0x18D11Cu: goto label_18d11c;
            case 0x18D120u: goto label_18d120;
            case 0x18D124u: goto label_18d124;
            case 0x18D128u: goto label_18d128;
            case 0x18D12Cu: goto label_18d12c;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D138u: goto label_18d138;
            case 0x18D13Cu: goto label_18d13c;
            case 0x18D140u: goto label_18d140;
            case 0x18D144u: goto label_18d144;
            case 0x18D148u: goto label_18d148;
            case 0x18D14Cu: goto label_18d14c;
            case 0x18D150u: goto label_18d150;
            case 0x18D154u: goto label_18d154;
            case 0x18D158u: goto label_18d158;
            case 0x18D15Cu: goto label_18d15c;
            case 0x18D160u: goto label_18d160;
            case 0x18D164u: goto label_18d164;
            case 0x18D168u: goto label_18d168;
            case 0x18D16Cu: goto label_18d16c;
            case 0x18D170u: goto label_18d170;
            case 0x18D174u: goto label_18d174;
            case 0x18D178u: goto label_18d178;
            case 0x18D17Cu: goto label_18d17c;
            case 0x18D180u: goto label_18d180;
            case 0x18D184u: goto label_18d184;
            case 0x18D188u: goto label_18d188;
            default: break;
        }
        return;
    }
label_fallthrough_0x18d184:
    ctx->pc = 0x18D18Cu;
}
