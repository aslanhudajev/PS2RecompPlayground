#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioHellDoor
// Address: 0x260380 - 0x26049c
void AudioHellDoor_0x260380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260380u;

    // 0x260380: 0x27bdffc0
    ctx->pc = 0x260380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x260384: 0xffbf0030
    ctx->pc = 0x260384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x260388: 0xffb20020
    ctx->pc = 0x260388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26038c: 0xffb10010
    ctx->pc = 0x26038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260390: 0xffb00000
    ctx->pc = 0x260390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260394: 0x80802d
    ctx->pc = 0x260394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260398: 0x3c020032
    ctx->pc = 0x260398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26039c: 0x8c42080c
    ctx->pc = 0x26039cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x2603a0: 0x14400005
    ctx->pc = 0x2603A0u;
    {
        const bool branch_taken_0x2603a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2603A4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2603a0) {
            ctx->pc = 0x2603B8u;
            goto label_2603b8;
        }
    }
    ctx->pc = 0x2603A8u;
    // 0x2603a8: 0x3c020032
    ctx->pc = 0x2603a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2603ac: 0x8c420810
    ctx->pc = 0x2603acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x2603b0: 0x10400002
    ctx->pc = 0x2603B0u;
    {
        const bool branch_taken_0x2603b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2603b0) {
            ctx->pc = 0x2603BCu;
            goto label_2603bc;
        }
    }
    ctx->pc = 0x2603B8u;
label_2603b8:
    // 0x2603b8: 0x802d
    ctx->pc = 0x2603b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2603bc:
    // 0x2603bc: 0x1600001a
    ctx->pc = 0x2603BCu;
    {
        const bool branch_taken_0x2603bc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2603C0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2603bc) {
            ctx->pc = 0x260428u;
            goto label_260428;
        }
    }
    ctx->pc = 0x2603C4u;
    // 0x2603c4: 0x3c040038
    ctx->pc = 0x2603c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)56 << 16));
    // 0x2603c8: 0xc08878c
    ctx->pc = 0x2603C8u;
    SET_GPR_U32(ctx, 31, 0x2603D0u);
    ctx->pc = 0x2603CCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603D0u; }
    }
    if (ctx->pc != 0x2603D0u) { return; }
    ctx->pc = 0x2603D0u;
    // 0x2603d0: 0x14400006
    ctx->pc = 0x2603D0u;
    {
        const bool branch_taken_0x2603d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2603D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)56 << 16));
        if (branch_taken_0x2603d0) {
            ctx->pc = 0x2603ECu;
            goto label_2603ec;
        }
    }
    ctx->pc = 0x2603D8u;
    // 0x2603d8: 0x34840020
    ctx->pc = 0x2603d8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32));
    // 0x2603dc: 0x220282d
    ctx->pc = 0x2603dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603e0: 0x240600e0
    ctx->pc = 0x2603e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2603e4: 0xc088aa2
    ctx->pc = 0x2603E4u;
    SET_GPR_U32(ctx, 31, 0x2603ECu);
    ctx->pc = 0x2603E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 121));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603ECu; }
    }
    if (ctx->pc != 0x2603ECu) { return; }
    ctx->pc = 0x2603ECu;
label_2603ec:
    // 0x2603ec: 0xc0887e4
    ctx->pc = 0x2603ECu;
    SET_GPR_U32(ctx, 31, 0x2603F4u);
    ctx->pc = 0x2603F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 121));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603F4u; }
    }
    if (ctx->pc != 0x2603F4u) { return; }
    ctx->pc = 0x2603F4u;
    // 0x2603f4: 0x40802d
    ctx->pc = 0x2603f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603f8: 0x12000023
    ctx->pc = 0x2603F8u;
    {
        const bool branch_taken_0x2603f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2603FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2603f8) {
            ctx->pc = 0x260488u;
            goto label_260488;
        }
    }
    ctx->pc = 0x260400u;
    // 0x260400: 0xc088648
    ctx->pc = 0x260400u;
    SET_GPR_U32(ctx, 31, 0x260408u);
    ctx->pc = 0x260404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260408u; }
    }
    if (ctx->pc != 0x260408u) { return; }
    ctx->pc = 0x260408u;
    // 0x260408: 0x200202d
    ctx->pc = 0x260408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26040c: 0x40282d
    ctx->pc = 0x26040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260410: 0xdfbf0030
    ctx->pc = 0x260410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260414: 0xdfb20020
    ctx->pc = 0x260414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260418: 0xdfb10010
    ctx->pc = 0x260418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26041c: 0xdfb00000
    ctx->pc = 0x26041cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260420: 0x8088850
    ctx->pc = 0x260420u;
    ctx->pc = 0x260424u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x222140u;
    AudioTrackPan_0x222140(rdram, ctx, runtime); return;
    ctx->pc = 0x260428u;
label_260428:
    // 0x260428: 0x3c040038
    ctx->pc = 0x260428u;
    SET_GPR_U32(ctx, 4, ((uint32_t)56 << 16));
    // 0x26042c: 0xc08878c
    ctx->pc = 0x26042Cu;
    SET_GPR_U32(ctx, 31, 0x260434u);
    ctx->pc = 0x260430u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260434u; }
    }
    if (ctx->pc != 0x260434u) { return; }
    ctx->pc = 0x260434u;
    // 0x260434: 0x10400006
    ctx->pc = 0x260434u;
    {
        const bool branch_taken_0x260434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260438u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
        if (branch_taken_0x260434) {
            ctx->pc = 0x260450u;
            goto label_260450;
        }
    }
    ctx->pc = 0x26043Cu;
    // 0x26043c: 0x3c040038
    ctx->pc = 0x26043cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)56 << 16));
    // 0x260440: 0xc08870e
    ctx->pc = 0x260440u;
    SET_GPR_U32(ctx, 31, 0x260448u);
    ctx->pc = 0x260444u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260448u; }
    }
    if (ctx->pc != 0x260448u) { return; }
    ctx->pc = 0x260448u;
    // 0x260448: 0x24120001
    ctx->pc = 0x260448u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26044c: 0x2a020002
    ctx->pc = 0x26044cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
label_260450:
    // 0x260450: 0x1440000d
    ctx->pc = 0x260450u;
    {
        const bool branch_taken_0x260450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260454u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x260450) {
            ctx->pc = 0x260488u;
            goto label_260488;
        }
    }
    ctx->pc = 0x260458u;
    // 0x260458: 0x1240000c
    ctx->pc = 0x260458u;
    {
        const bool branch_taken_0x260458 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x26045Cu;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x260458) {
            ctx->pc = 0x26048Cu;
            goto label_26048c;
        }
    }
    ctx->pc = 0x260460u;
    // 0x260460: 0x3c040038
    ctx->pc = 0x260460u;
    SET_GPR_U32(ctx, 4, ((uint32_t)56 << 16));
    // 0x260464: 0x34840021
    ctx->pc = 0x260464u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 33));
    // 0x260468: 0x220282d
    ctx->pc = 0x260468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26046c: 0x240600e0
    ctx->pc = 0x26046cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260470: 0x24070012
    ctx->pc = 0x260470u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 18));
    // 0x260474: 0xdfbf0030
    ctx->pc = 0x260474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260478: 0xdfb10010
    ctx->pc = 0x260478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26047c: 0xdfb00000
    ctx->pc = 0x26047cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260480: 0x8088a26
    ctx->pc = 0x260480u;
    ctx->pc = 0x260484u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260488u;
label_260488:
    // 0x260488: 0xdfb20020
    ctx->pc = 0x260488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26048c:
    // 0x26048c: 0xdfb10010
    ctx->pc = 0x26048cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260490: 0xdfb00000
    ctx->pc = 0x260490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260494: 0x3e00008
    ctx->pc = 0x260494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2603B8u: goto label_2603b8;
            case 0x2603BCu: goto label_2603bc;
            case 0x2603ECu: goto label_2603ec;
            case 0x260428u: goto label_260428;
            case 0x260450u: goto label_260450;
            case 0x260488u: goto label_260488;
            case 0x26048Cu: goto label_26048c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26049Cu;
}
