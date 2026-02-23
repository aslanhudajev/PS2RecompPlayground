#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsSkip
// Address: 0x197880 - 0x197978
void sfmpv_IsSkip_0x197880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsSkip");


    ctx->pc = 0x197880u;

    // 0x197880: 0x27bdffa0
    ctx->pc = 0x197880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197884: 0xffb30030
    ctx->pc = 0x197884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x197888: 0xffb00000
    ctx->pc = 0x197888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19788c: 0xa0982d
    ctx->pc = 0x19788cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197890: 0x80802d
    ctx->pc = 0x197890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197894: 0xffb40040
    ctx->pc = 0x197894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x197898: 0xffb20020
    ctx->pc = 0x197898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19789c: 0x26143784
    ctx->pc = 0x19789cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 14212));
    // 0x1978a0: 0x2405002f
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1978a4: 0x24120001
    ctx->pc = 0x1978a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1978a8: 0xffbf0050
    ctx->pc = 0x1978a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1978ac: 0xc0674c2
    ctx->pc = 0x1978ACu;
    SET_GPR_U32(ctx, 31, 0x1978B4u);
    ctx->pc = 0x1978B0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978B4u; }
        else if (ctx->pc != 0x1978B4u) { ctx->pc = 0x1978B4u; }
    }
    if (ctx->pc != 0x1978B4u) { return; }
    ctx->pc = 0x1978B4u;
    // 0x1978b4: 0x14520003
    ctx->pc = 0x1978B4u;
    {
        const bool branch_taken_0x1978b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x1978B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1978b4) {
            ctx->pc = 0x1978C4u;
            goto label_1978c4;
        }
    }
    ctx->pc = 0x1978BCu;
    // 0x1978bc: 0x10000026
    ctx->pc = 0x1978BCu;
    {
        const bool branch_taken_0x1978bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1978C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1978bc) {
            ctx->pc = 0x197958u;
            goto label_197958;
        }
    }
    ctx->pc = 0x1978C4u;
label_1978c4:
    // 0x1978c4: 0xc0674c2
    ctx->pc = 0x1978C4u;
    SET_GPR_U32(ctx, 31, 0x1978CCu);
    ctx->pc = 0x1978C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978CCu; }
        else if (ctx->pc != 0x1978CCu) { ctx->pc = 0x1978CCu; }
    }
    if (ctx->pc != 0x1978CCu) { return; }
    ctx->pc = 0x1978CCu;
    // 0x1978cc: 0x54520003
    ctx->pc = 0x1978CCu;
    {
        const bool branch_taken_0x1978cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x1978cc) {
            ctx->pc = 0x1978D0u;
            SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 24)));
            ctx->pc = 0x1978DCu;
            goto label_1978dc;
        }
    }
    ctx->pc = 0x1978D4u;
    // 0x1978d4: 0x10000020
    ctx->pc = 0x1978D4u;
    {
        const bool branch_taken_0x1978d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1978D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1978d4) {
            ctx->pc = 0x197958u;
            goto label_197958;
        }
    }
    ctx->pc = 0x1978DCu;
label_1978dc:
    // 0x1978dc: 0xc065ea0
    ctx->pc = 0x1978DCu;
    SET_GPR_U32(ctx, 31, 0x1978E4u);
    ctx->pc = 0x1978E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsSeekSkip_0x197a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978E4u; }
        else if (ctx->pc != 0x1978E4u) { ctx->pc = 0x1978E4u; }
    }
    if (ctx->pc != 0x1978E4u) { return; }
    ctx->pc = 0x1978E4u;
    // 0x1978e4: 0x54400017
    ctx->pc = 0x1978E4u;
    {
        const bool branch_taken_0x1978e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1978e4) {
            ctx->pc = 0x1978E8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x197944u;
            goto label_197944;
        }
    }
    ctx->pc = 0x1978ECu;
    // 0x1978ec: 0x200202d
    ctx->pc = 0x1978ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978f0: 0xc065eb4
    ctx->pc = 0x1978F0u;
    SET_GPR_U32(ctx, 31, 0x1978F8u);
    ctx->pc = 0x1978F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsPtypeSkip_0x197ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978F8u; }
        else if (ctx->pc != 0x1978F8u) { ctx->pc = 0x1978F8u; }
    }
    if (ctx->pc != 0x1978F8u) { return; }
    ctx->pc = 0x1978F8u;
    // 0x1978f8: 0x54400012
    ctx->pc = 0x1978F8u;
    {
        const bool branch_taken_0x1978f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1978f8) {
            ctx->pc = 0x1978FCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x197944u;
            goto label_197944;
        }
    }
    ctx->pc = 0x197900u;
    // 0x197900: 0x260302d
    ctx->pc = 0x197900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197904: 0x200202d
    ctx->pc = 0x197904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197908: 0xc065eca
    ctx->pc = 0x197908u;
    SET_GPR_U32(ctx, 31, 0x197910u);
    ctx->pc = 0x19790Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsEmptyBpic_0x197b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197910u; }
        else if (ctx->pc != 0x197910u) { ctx->pc = 0x197910u; }
    }
    if (ctx->pc != 0x197910u) { return; }
    ctx->pc = 0x197910u;
    // 0x197910: 0x5440000c
    ctx->pc = 0x197910u;
    {
        const bool branch_taken_0x197910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x197910) {
            ctx->pc = 0x197914u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x197944u;
            goto label_197944;
        }
    }
    ctx->pc = 0x197918u;
    // 0x197918: 0x200202d
    ctx->pc = 0x197918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19791c: 0xc065e5e
    ctx->pc = 0x19791Cu;
    SET_GPR_U32(ctx, 31, 0x197924u);
    ctx->pc = 0x197920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197978u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsDefect_0x197978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197924u; }
        else if (ctx->pc != 0x197924u) { ctx->pc = 0x197924u; }
    }
    if (ctx->pc != 0x197924u) { return; }
    ctx->pc = 0x197924u;
    // 0x197924: 0x10400003
    ctx->pc = 0x197924u;
    {
        const bool branch_taken_0x197924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197928u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197924) {
            ctx->pc = 0x197934u;
            goto label_197934;
        }
    }
    ctx->pc = 0x19792Cu;
    // 0x19792c: 0x10000005
    ctx->pc = 0x19792Cu;
    {
        const bool branch_taken_0x19792c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197930u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19792c) {
            ctx->pc = 0x197944u;
            goto label_197944;
        }
    }
    ctx->pc = 0x197934u;
label_197934:
    // 0x197934: 0xc065eee
    ctx->pc = 0x197934u;
    SET_GPR_U32(ctx, 31, 0x19793Cu);
    ctx->pc = 0x197938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsLate_0x197bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19793Cu; }
        else if (ctx->pc != 0x19793Cu) { ctx->pc = 0x19793Cu; }
    }
    if (ctx->pc != 0x19793Cu) { return; }
    ctx->pc = 0x19793Cu;
    // 0x19793c: 0x882d
    ctx->pc = 0x19793cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197940: 0x242880b
    ctx->pc = 0x197940u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 18));
label_197944:
    // 0x197944: 0x200202d
    ctx->pc = 0x197944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197948: 0x280282d
    ctx->pc = 0x197948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19794c: 0xc065e6e
    ctx->pc = 0x19794Cu;
    SET_GPR_U32(ctx, 31, 0x197954u);
    ctx->pc = 0x197950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1979B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_UpdateDefect_0x1979b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197954u; }
        else if (ctx->pc != 0x197954u) { ctx->pc = 0x197954u; }
    }
    if (ctx->pc != 0x197954u) { return; }
    ctx->pc = 0x197954u;
    // 0x197954: 0x220102d
    ctx->pc = 0x197954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197958:
    // 0x197958: 0xdfbf0050
    ctx->pc = 0x197958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19795c: 0xdfb40040
    ctx->pc = 0x19795cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197960: 0xdfb30030
    ctx->pc = 0x197960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197964: 0xdfb20020
    ctx->pc = 0x197964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197968: 0xdfb10010
    ctx->pc = 0x197968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19796c: 0xdfb00000
    ctx->pc = 0x19796cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197970: 0x3e00008
    ctx->pc = 0x197970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1978C4u: goto label_1978c4;
            case 0x1978DCu: goto label_1978dc;
            case 0x197934u: goto label_197934;
            case 0x197944u: goto label_197944;
            case 0x197958u: goto label_197958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197978u;
}
