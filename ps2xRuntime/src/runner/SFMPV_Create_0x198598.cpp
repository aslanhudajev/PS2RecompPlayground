#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_Create
// Address: 0x198598 - 0x1986c8
void SFMPV_Create_0x198598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_Create");


    ctx->pc = 0x198598u;

    // 0x198598: 0x27bdffd0
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19859c: 0x24050005
    ctx->pc = 0x19859cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1985a0: 0xffb10010
    ctx->pc = 0x1985a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1985a4: 0x80882d
    ctx->pc = 0x1985a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985a8: 0xffbf0020
    ctx->pc = 0x1985a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1985ac: 0xc0674c2
    ctx->pc = 0x1985ACu;
    SET_GPR_U32(ctx, 31, 0x1985B4u);
    ctx->pc = 0x1985B0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985B4u; }
        else if (ctx->pc != 0x1985B4u) { ctx->pc = 0x1985B4u; }
    }
    if (ctx->pc != 0x1985B4u) { return; }
    ctx->pc = 0x1985B4u;
    // 0x1985b4: 0x1040003e
    ctx->pc = 0x1985B4u;
    {
        const bool branch_taken_0x1985b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1985B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1985b4) {
            ctx->pc = 0x1986B0u;
            goto label_1986b0;
        }
    }
    ctx->pc = 0x1985BCu;
    // 0x1985bc: 0xc0661b2
    ctx->pc = 0x1985BCu;
    SET_GPR_U32(ctx, 31, 0x1985C4u);
    ctx->pc = 0x1985C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 14144));
    ctx->pc = 0x1986C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_InitInf_0x1986c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985C4u; }
        else if (ctx->pc != 0x1985C4u) { ctx->pc = 0x1985C4u; }
    }
    if (ctx->pc != 0x1985C4u) { return; }
    ctx->pc = 0x1985C4u;
    // 0x1985c4: 0x1440003c
    ctx->pc = 0x1985C4u;
    {
        const bool branch_taken_0x1985c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1985C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1985c4) {
            ctx->pc = 0x1986B8u;
            goto label_1986b8;
        }
    }
    ctx->pc = 0x1985CCu;
    // 0x1985cc: 0xc066798
    ctx->pc = 0x1985CCu;
    SET_GPR_U32(ctx, 31, 0x1985D4u);
    ctx->pc = 0x1985D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_Create_0x199e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985D4u; }
        else if (ctx->pc != 0x1985D4u) { ctx->pc = 0x1985D4u; }
    }
    if (ctx->pc != 0x1985D4u) { return; }
    ctx->pc = 0x1985D4u;
    // 0x1985d4: 0xc0620a8
    ctx->pc = 0x1985D4u;
    SET_GPR_U32(ctx, 31, 0x1985DCu);
    ctx->pc = 0x1882A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_Create_0x1882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985DCu; }
        else if (ctx->pc != 0x1985DCu) { ctx->pc = 0x1985DCu; }
    }
    if (ctx->pc != 0x1985DCu) { return; }
    ctx->pc = 0x1985DCu;
    // 0x1985dc: 0x40802d
    ctx->pc = 0x1985dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985e0: 0x56000007
    ctx->pc = 0x1985E0u;
    {
        const bool branch_taken_0x1985e0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1985e0) {
            ctx->pc = 0x1985E4u;
            SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
            ctx->pc = 0x198600u;
            goto label_198600;
        }
    }
    ctx->pc = 0x1985E8u;
    // 0x1985e8: 0x3c05ff00
    ctx->pc = 0x1985e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1985ec: 0x220202d
    ctx->pc = 0x1985ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985f0: 0xc064ea0
    ctx->pc = 0x1985F0u;
    SET_GPR_U32(ctx, 31, 0x1985F8u);
    ctx->pc = 0x1985F4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3850));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985F8u; }
        else if (ctx->pc != 0x1985F8u) { ctx->pc = 0x1985F8u; }
    }
    if (ctx->pc != 0x1985F8u) { return; }
    ctx->pc = 0x1985F8u;
    // 0x1985f8: 0x1000002f
    ctx->pc = 0x1985F8u;
    {
        const bool branch_taken_0x1985f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1985FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1985f8) {
            ctx->pc = 0x1986B8u;
            goto label_1986b8;
        }
    }
    ctx->pc = 0x198600u;
label_198600:
    // 0x198600: 0x200202d
    ctx->pc = 0x198600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198604: 0x24a58880
    ctx->pc = 0x198604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x198608: 0xc06180e
    ctx->pc = 0x198608u;
    SET_GPR_U32(ctx, 31, 0x198610u);
    ctx->pc = 0x19860Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186038u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetErrFunc_0x186038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198610u; }
        else if (ctx->pc != 0x198610u) { ctx->pc = 0x198610u; }
    }
    if (ctx->pc != 0x198610u) { return; }
    ctx->pc = 0x198610u;
    // 0x198610: 0x10400009
    ctx->pc = 0x198610u;
    {
        const bool branch_taken_0x198610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x198614u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198610) {
            ctx->pc = 0x198638u;
            goto label_198638;
        }
    }
    ctx->pc = 0x198618u;
    // 0x198618: 0xc066248
    ctx->pc = 0x198618u;
    SET_GPR_U32(ctx, 31, 0x198620u);
    ctx->pc = 0x19861Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DestroySub_0x198920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198620u; }
        else if (ctx->pc != 0x198620u) { ctx->pc = 0x198620u; }
    }
    if (ctx->pc != 0x198620u) { return; }
    ctx->pc = 0x198620u;
    // 0x198620: 0x3c05ff00
    ctx->pc = 0x198620u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x198624: 0x220202d
    ctx->pc = 0x198624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198628: 0xc064ea0
    ctx->pc = 0x198628u;
    SET_GPR_U32(ctx, 31, 0x198630u);
    ctx->pc = 0x19862Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3851));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198630u; }
        else if (ctx->pc != 0x198630u) { ctx->pc = 0x198630u; }
    }
    if (ctx->pc != 0x198630u) { return; }
    ctx->pc = 0x198630u;
    // 0x198630: 0x10000021
    ctx->pc = 0x198630u;
    {
        const bool branch_taken_0x198630 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198634u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x198630) {
            ctx->pc = 0x1986B8u;
            goto label_1986b8;
        }
    }
    ctx->pc = 0x198638u;
label_198638:
    // 0x198638: 0xc0674c2
    ctx->pc = 0x198638u;
    SET_GPR_U32(ctx, 31, 0x198640u);
    ctx->pc = 0x19863Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198640u; }
        else if (ctx->pc != 0x198640u) { ctx->pc = 0x198640u; }
    }
    if (ctx->pc != 0x198640u) { return; }
    ctx->pc = 0x198640u;
    // 0x198640: 0x40302d
    ctx->pc = 0x198640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198644: 0x200202d
    ctx->pc = 0x198644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198648: 0xc06210a
    ctx->pc = 0x198648u;
    SET_GPR_U32(ctx, 31, 0x198650u);
    ctx->pc = 0x19864Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x188428u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetCond_0x188428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198650u; }
        else if (ctx->pc != 0x198650u) { ctx->pc = 0x198650u; }
    }
    if (ctx->pc != 0x198650u) { return; }
    ctx->pc = 0x198650u;
    // 0x198650: 0x220202d
    ctx->pc = 0x198650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198654: 0xc0674c2
    ctx->pc = 0x198654u;
    SET_GPR_U32(ctx, 31, 0x19865Cu);
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19865Cu; }
        else if (ctx->pc != 0x19865Cu) { ctx->pc = 0x19865Cu; }
    }
    if (ctx->pc != 0x19865Cu) { return; }
    ctx->pc = 0x19865Cu;
    // 0x19865c: 0x40302d
    ctx->pc = 0x19865cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198660: 0x200202d
    ctx->pc = 0x198660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198664: 0xc06210a
    ctx->pc = 0x198664u;
    SET_GPR_U32(ctx, 31, 0x19866Cu);
    ctx->pc = 0x198668u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x188428u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetCond_0x188428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19866Cu; }
        else if (ctx->pc != 0x19866Cu) { ctx->pc = 0x19866Cu; }
    }
    if (ctx->pc != 0x19866Cu) { return; }
    ctx->pc = 0x19866Cu;
    // 0x19866c: 0x200202d
    ctx->pc = 0x19866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198670: 0x24050003
    ctx->pc = 0x198670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x198674: 0xc06210a
    ctx->pc = 0x198674u;
    SET_GPR_U32(ctx, 31, 0x19867Cu);
    ctx->pc = 0x198678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188428u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetCond_0x188428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19867Cu; }
        else if (ctx->pc != 0x19867Cu) { ctx->pc = 0x19867Cu; }
    }
    if (ctx->pc != 0x19867Cu) { return; }
    ctx->pc = 0x19867Cu;
    // 0x19867c: 0x200202d
    ctx->pc = 0x19867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198680: 0x24050004
    ctx->pc = 0x198680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x198684: 0xc06210a
    ctx->pc = 0x198684u;
    SET_GPR_U32(ctx, 31, 0x19868Cu);
    ctx->pc = 0x198688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188428u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetCond_0x188428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19868Cu; }
        else if (ctx->pc != 0x19868Cu) { ctx->pc = 0x19868Cu; }
    }
    if (ctx->pc != 0x19868Cu) { return; }
    ctx->pc = 0x19868Cu;
    // 0x19868c: 0x200202d
    ctx->pc = 0x19868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198690: 0x24050005
    ctx->pc = 0x198690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x198694: 0xc06210a
    ctx->pc = 0x198694u;
    SET_GPR_U32(ctx, 31, 0x19869Cu);
    ctx->pc = 0x198698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188428u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetCond_0x188428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19869Cu; }
        else if (ctx->pc != 0x19869Cu) { ctx->pc = 0x19869Cu; }
    }
    if (ctx->pc != 0x19869Cu) { return; }
    ctx->pc = 0x19869Cu;
    // 0x19869c: 0x8e260038
    ctx->pc = 0x19869cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1986a0: 0x200202d
    ctx->pc = 0x1986a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986a4: 0xc06210a
    ctx->pc = 0x1986A4u;
    SET_GPR_U32(ctx, 31, 0x1986ACu);
    ctx->pc = 0x1986A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x188428u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetCond_0x188428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1986ACu; }
        else if (ctx->pc != 0x1986ACu) { ctx->pc = 0x1986ACu; }
    }
    if (ctx->pc != 0x1986ACu) { return; }
    ctx->pc = 0x1986ACu;
    // 0x1986ac: 0xae303740
    ctx->pc = 0x1986acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14144), GPR_U32(ctx, 16));
label_1986b0:
    // 0x1986b0: 0x102d
    ctx->pc = 0x1986b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986b4: 0xdfbf0020
    ctx->pc = 0x1986b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1986b8:
    // 0x1986b8: 0xdfb10010
    ctx->pc = 0x1986b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1986bc: 0xdfb00000
    ctx->pc = 0x1986bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1986c0: 0x3e00008
    ctx->pc = 0x1986C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1986C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198600u: goto label_198600;
            case 0x198638u: goto label_198638;
            case 0x1986B0u: goto label_1986b0;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1986C8u;
}
