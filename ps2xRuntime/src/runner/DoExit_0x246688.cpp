#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoExit
// Address: 0x246688 - 0x2467b0
void DoExit_0x246688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x246688u;

    // 0x246688: 0x27bdffe0
    ctx->pc = 0x246688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24668c: 0xffbf0010
    ctx->pc = 0x24668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246690: 0xffb00000
    ctx->pc = 0x246690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246694: 0xc091990
    ctx->pc = 0x246694u;
    SET_GPR_U32(ctx, 31, 0x24669Cu);
    ctx->pc = 0x246698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x246640u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAutoExit_0x246640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24669Cu; }
    }
    if (ctx->pc != 0x24669Cu) { return; }
    ctx->pc = 0x24669Cu;
    // 0x24669c: 0x14400041
    ctx->pc = 0x24669Cu;
    {
        const bool branch_taken_0x24669c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2466A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x24669c) {
            ctx->pc = 0x2467A4u;
            goto label_2467a4;
        }
    }
    ctx->pc = 0x2466A4u;
    // 0x2466a4: 0x3c020032
    ctx->pc = 0x2466a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2466a8: 0x8c4207d0
    ctx->pc = 0x2466a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2000)));
    // 0x2466ac: 0x14400014
    ctx->pc = 0x2466ACu;
    {
        const bool branch_taken_0x2466ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2466B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2466ac) {
            ctx->pc = 0x246700u;
            goto label_246700;
        }
    }
    ctx->pc = 0x2466B4u;
    // 0x2466b4: 0xc096d74
    ctx->pc = 0x2466B4u;
    SET_GPR_U32(ctx, 31, 0x2466BCu);
    ctx->pc = 0x2466B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25B5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_collis_exit_0x25b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2466BCu; }
    }
    if (ctx->pc != 0x2466BCu) { return; }
    ctx->pc = 0x2466BCu;
    // 0x2466bc: 0x10400015
    ctx->pc = 0x2466BCu;
    {
        const bool branch_taken_0x2466bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2466C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2466bc) {
            ctx->pc = 0x246714u;
            goto label_246714;
        }
    }
    ctx->pc = 0x2466C4u;
    // 0x2466c4: 0x8c4207d4
    ctx->pc = 0x2466c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2004)));
    // 0x2466c8: 0x1440000d
    ctx->pc = 0x2466C8u;
    {
        const bool branch_taken_0x2466c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2466CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2466c8) {
            ctx->pc = 0x246700u;
            goto label_246700;
        }
    }
    ctx->pc = 0x2466D0u;
    // 0x2466d0: 0x3c030031
    ctx->pc = 0x2466d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2466d4: 0x24631b90
    ctx->pc = 0x2466d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x2466d8: 0x8e020000
    ctx->pc = 0x2466d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2466dc: 0x2404003c
    ctx->pc = 0x2466dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2466e0: 0x441018
    ctx->pc = 0x2466e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2466e4: 0x621821
    ctx->pc = 0x2466e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2466e8: 0xc4610020
    ctx->pc = 0x2466e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2466ec: 0x44800000
    ctx->pc = 0x2466ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2466f0: 0x46000832
    ctx->pc = 0x2466f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2466f4: 0x0
    ctx->pc = 0x2466f4u;
    // NOP
    // 0x2466f8: 0x45000007
    ctx->pc = 0x2466F8u;
    {
        const bool branch_taken_0x2466f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2466FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2466f8) {
            ctx->pc = 0x246718u;
            goto label_246718;
        }
    }
    ctx->pc = 0x246700u;
label_246700:
    // 0x246700: 0x96030928
    ctx->pc = 0x246700u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2344)));
    // 0x246704: 0x9442ffbc
    ctx->pc = 0x246704u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x246708: 0x621821
    ctx->pc = 0x246708u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24670c: 0x10000002
    ctx->pc = 0x24670Cu;
    {
        const bool branch_taken_0x24670c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x246710u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 2344), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x24670c) {
            ctx->pc = 0x246718u;
            goto label_246718;
        }
    }
    ctx->pc = 0x246714u;
label_246714:
    // 0x246714: 0xa6000928
    ctx->pc = 0x246714u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2344), (uint16_t)GPR_U32(ctx, 0));
label_246718:
    // 0x246718: 0x86020928
    ctx->pc = 0x246718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2344)));
    // 0x24671c: 0x28420006
    ctx->pc = 0x24671cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 6));
    // 0x246720: 0x5440001b
    ctx->pc = 0x246720u;
    {
        const bool branch_taken_0x246720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x246720) {
            ctx->pc = 0x246724u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->pc = 0x246790u;
            goto label_246790;
        }
    }
    ctx->pc = 0x246728u;
    // 0x246728: 0x24020004
    ctx->pc = 0x246728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x24672c: 0xae0200fc
    ctx->pc = 0x24672cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x246730: 0xa60001ca
    ctx->pc = 0x246730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 458), (uint16_t)GPR_U32(ctx, 0));
    // 0x246734: 0x3c020036
    ctx->pc = 0x246734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x246738: 0x8c42d934
    ctx->pc = 0x246738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x24673c: 0x4410019
    ctx->pc = 0x24673Cu;
    {
        const bool branch_taken_0x24673c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x246740u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x24673c) {
            ctx->pc = 0x2467A4u;
            goto label_2467a4;
        }
    }
    ctx->pc = 0x246744u;
    // 0x246744: 0x3c020031
    ctx->pc = 0x246744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x246748: 0x8c42002c
    ctx->pc = 0x246748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24674c: 0x28420002
    ctx->pc = 0x24674cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x246750: 0x54400015
    ctx->pc = 0x246750u;
    {
        const bool branch_taken_0x246750 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x246750) {
            ctx->pc = 0x246754u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x2467A8u;
            goto label_2467a8;
        }
    }
    ctx->pc = 0x246758u;
    // 0x246758: 0x3c020032
    ctx->pc = 0x246758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24675c: 0x8c420810
    ctx->pc = 0x24675cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x246760: 0x54400011
    ctx->pc = 0x246760u;
    {
        const bool branch_taken_0x246760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x246760) {
            ctx->pc = 0x246764u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x2467A8u;
            goto label_2467a8;
        }
    }
    ctx->pc = 0x246768u;
    // 0x246768: 0x3c020032
    ctx->pc = 0x246768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24676c: 0x8c4207bc
    ctx->pc = 0x24676cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x246770: 0x28420003
    ctx->pc = 0x246770u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x246774: 0x1040000b
    ctx->pc = 0x246774u;
    {
        const bool branch_taken_0x246774 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x246778u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x246774) {
            ctx->pc = 0x2467A4u;
            goto label_2467a4;
        }
    }
    ctx->pc = 0x24677Cu;
    // 0x24677c: 0x8e050000
    ctx->pc = 0x24677cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246780: 0xc0a3a1c
    ctx->pc = 0x246780u;
    SET_GPR_U32(ctx, 31, 0x246788u);
    ctx->pc = 0x246784u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246788u; }
    }
    if (ctx->pc != 0x246788u) { return; }
    ctx->pc = 0x246788u;
    // 0x246788: 0x10000006
    ctx->pc = 0x246788u;
    {
        const bool branch_taken_0x246788 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24678Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x246788) {
            ctx->pc = 0x2467A4u;
            goto label_2467a4;
        }
    }
    ctx->pc = 0x246790u;
label_246790:
    // 0x246790: 0x24020004
    ctx->pc = 0x246790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x246794: 0x14620003
    ctx->pc = 0x246794u;
    {
        const bool branch_taken_0x246794 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x246798u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x246794) {
            ctx->pc = 0x2467A4u;
            goto label_2467a4;
        }
    }
    ctx->pc = 0x24679Cu;
    // 0x24679c: 0x24020001
    ctx->pc = 0x24679cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2467a0: 0xae0200fc
    ctx->pc = 0x2467a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_2467a4:
    // 0x2467a4: 0xdfb00000
    ctx->pc = 0x2467a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2467a8:
    // 0x2467a8: 0x3e00008
    ctx->pc = 0x2467A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2467ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246700u: goto label_246700;
            case 0x246714u: goto label_246714;
            case 0x246718u: goto label_246718;
            case 0x246790u: goto label_246790;
            case 0x2467A4u: goto label_2467a4;
            case 0x2467A8u: goto label_2467a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2467B0u;
}
