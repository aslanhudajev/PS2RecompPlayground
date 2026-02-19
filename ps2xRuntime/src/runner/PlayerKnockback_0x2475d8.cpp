#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerKnockback
// Address: 0x2475d8 - 0x247964
void PlayerKnockback_0x2475d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2475d8u;

    // 0x2475d8: 0x27bdffb0
    ctx->pc = 0x2475d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2475dc: 0xffbf0030
    ctx->pc = 0x2475dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2475e0: 0xffb20020
    ctx->pc = 0x2475e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2475e4: 0xffb10010
    ctx->pc = 0x2475e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2475e8: 0xffb00000
    ctx->pc = 0x2475e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2475ec: 0xe7b40040
    ctx->pc = 0x2475ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2475f0: 0x80802d
    ctx->pc = 0x2475f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475f4: 0xa0902d
    ctx->pc = 0x2475f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475f8: 0x46006506
    ctx->pc = 0x2475f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2475fc: 0x44801000
    ctx->pc = 0x2475fcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x247600: 0xc60008b8
    ctx->pc = 0x247600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247604: 0x46001034
    ctx->pc = 0x247604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247608: 0x0
    ctx->pc = 0x247608u;
    // NOP
    // 0x24760c: 0x45000002
    ctx->pc = 0x24760Cu;
    {
        const bool branch_taken_0x24760c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247610u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24760c) {
            ctx->pc = 0x247618u;
            goto label_247618;
        }
    }
    ctx->pc = 0x247614u;
    // 0x247614: 0xe60208b8
    ctx->pc = 0x247614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2232), bits); }
label_247618:
    // 0x247618: 0x8e0308b0
    ctx->pc = 0x247618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2224)));
    // 0x24761c: 0x8e0208ac
    ctx->pc = 0x24761cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x247620: 0xae0208b0
    ctx->pc = 0x247620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2224), GPR_U32(ctx, 2));
    // 0x247624: 0x30424000
    ctx->pc = 0x247624u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x247628: 0x50400004
    ctx->pc = 0x247628u;
    {
        const bool branch_taken_0x247628 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x247628) {
            ctx->pc = 0x24762Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
            ctx->pc = 0x24763Cu;
            goto label_24763c;
        }
    }
    ctx->pc = 0x247630u;
    // 0x247630: 0xae0208ac
    ctx->pc = 0x247630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
    // 0x247634: 0x100000c4
    ctx->pc = 0x247634u;
    {
        const bool branch_taken_0x247634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247638u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
        if (branch_taken_0x247634) {
            ctx->pc = 0x247948u;
            goto label_247948;
        }
    }
    ctx->pc = 0x24763Cu;
label_24763c:
    // 0x24763c: 0x30428000
    ctx->pc = 0x24763cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x247640: 0x5040000c
    ctx->pc = 0x247640u;
    {
        const bool branch_taken_0x247640 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x247640) {
            ctx->pc = 0x247644u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
            ctx->pc = 0x247674u;
            goto label_247674;
        }
    }
    ctx->pc = 0x247648u;
    // 0x247648: 0xae0208ac
    ctx->pc = 0x247648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
    // 0x24764c: 0x30628000
    ctx->pc = 0x24764cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x247650: 0x144000bd
    ctx->pc = 0x247650u;
    {
        const bool branch_taken_0x247650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x247654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 301));
        if (branch_taken_0x247650) {
            ctx->pc = 0x247948u;
            goto label_247948;
        }
    }
    ctx->pc = 0x247658u;
    // 0x247658: 0xc60008b4
    ctx->pc = 0x247658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24765c: 0xe6000848
    ctx->pc = 0x24765cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2120), bits); }
    // 0x247660: 0xc60008b8
    ctx->pc = 0x247660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247664: 0xe600084c
    ctx->pc = 0x247664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2124), bits); }
    // 0x247668: 0xc60008bc
    ctx->pc = 0x247668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24766c: 0x100000b6
    ctx->pc = 0x24766Cu;
    {
        const bool branch_taken_0x24766c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247670u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2128), bits); }
        if (branch_taken_0x24766c) {
            ctx->pc = 0x247948u;
            goto label_247948;
        }
    }
    ctx->pc = 0x247674u;
label_247674:
    // 0x247674: 0x10400007
    ctx->pc = 0x247674u;
    {
        const bool branch_taken_0x247674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x247678u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x247674) {
            ctx->pc = 0x247694u;
            goto label_247694;
        }
    }
    ctx->pc = 0x24767Cu;
    // 0x24767c: 0x8e040000
    ctx->pc = 0x24767cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247680: 0xc60c08a8
    ctx->pc = 0x247680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x247684: 0x302d
    ctx->pc = 0x247684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247688: 0xc08c73c
    ctx->pc = 0x247688u;
    SET_GPR_U32(ctx, 31, 0x247690u);
    ctx->pc = 0x24768Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247690u; }
    }
    if (ctx->pc != 0x247690u) { return; }
    ctx->pc = 0x247690u;
    // 0x247690: 0xae0008a8
    ctx->pc = 0x247690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2216), GPR_U32(ctx, 0));
label_247694:
    // 0x247694: 0x8e020134
    ctx->pc = 0x247694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x247698: 0x3c030001
    ctx->pc = 0x247698u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x24769c: 0x431024
    ctx->pc = 0x24769cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2476a0: 0x10400004
    ctx->pc = 0x2476A0u;
    {
        const bool branch_taken_0x2476a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2476A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2476a0) {
            ctx->pc = 0x2476B4u;
            goto label_2476b4;
        }
    }
    ctx->pc = 0x2476A8u;
    // 0x2476a8: 0xae0008a8
    ctx->pc = 0x2476a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2216), GPR_U32(ctx, 0));
    // 0x2476ac: 0x100000a6
    ctx->pc = 0x2476ACu;
    {
        const bool branch_taken_0x2476ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2476B0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 0));
        if (branch_taken_0x2476ac) {
            ctx->pc = 0x247948u;
            goto label_247948;
        }
    }
    ctx->pc = 0x2476B4u;
label_2476b4:
    // 0x2476b4: 0x8e0408ac
    ctx->pc = 0x2476b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x2476b8: 0x3c020400
    ctx->pc = 0x2476b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
    // 0x2476bc: 0x821024
    ctx->pc = 0x2476bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2476c0: 0x240300c8
    ctx->pc = 0x2476c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 200));
    // 0x2476c4: 0xc60108a8
    ctx->pc = 0x2476c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2476c8: 0x3c013f80
    ctx->pc = 0x2476c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2476cc: 0x44810000
    ctx->pc = 0x2476ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2476d0: 0x46010034
    ctx->pc = 0x2476d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2476d4: 0x0
    ctx->pc = 0x2476d4u;
    // NOP
    // 0x2476d8: 0x45000091
    ctx->pc = 0x2476D8u;
    {
        const bool branch_taken_0x2476d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2476DCu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x2476d8) {
            ctx->pc = 0x247920u;
            goto label_247920;
        }
    }
    ctx->pc = 0x2476E0u;
    // 0x2476e0: 0x3c020001
    ctx->pc = 0x2476e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2476e4: 0x821024
    ctx->pc = 0x2476e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2476e8: 0x10400005
    ctx->pc = 0x2476E8u;
    {
        const bool branch_taken_0x2476e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2476ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x2476e8) {
            ctx->pc = 0x247700u;
            goto label_247700;
        }
    }
    ctx->pc = 0x2476F0u;
    // 0x2476f0: 0x3c0142c8
    ctx->pc = 0x2476f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x2476f4: 0x44811000
    ctx->pc = 0x2476f4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2476f8: 0x1000001d
    ctx->pc = 0x2476F8u;
    {
        const bool branch_taken_0x2476f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2476FCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2476f8) {
            ctx->pc = 0x247770u;
            goto label_247770;
        }
    }
    ctx->pc = 0x247700u;
label_247700:
    // 0x247700: 0x8e0208ac
    ctx->pc = 0x247700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x247704: 0x30420040
    ctx->pc = 0x247704u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x247708: 0x10400005
    ctx->pc = 0x247708u;
    {
        const bool branch_taken_0x247708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24770Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x247708) {
            ctx->pc = 0x247720u;
            goto label_247720;
        }
    }
    ctx->pc = 0x247710u;
    // 0x247710: 0x3c0142c8
    ctx->pc = 0x247710u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x247714: 0x44811000
    ctx->pc = 0x247714u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x247718: 0x10000015
    ctx->pc = 0x247718u;
    {
        const bool branch_taken_0x247718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24771Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x247718) {
            ctx->pc = 0x247770u;
            goto label_247770;
        }
    }
    ctx->pc = 0x247720u;
label_247720:
    // 0x247720: 0x8e0208ac
    ctx->pc = 0x247720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x247724: 0x30420120
    ctx->pc = 0x247724u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 288));
    // 0x247728: 0x5040000b
    ctx->pc = 0x247728u;
    {
        const bool branch_taken_0x247728 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x247728) {
            ctx->pc = 0x24772Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
            ctx->pc = 0x247758u;
            goto label_247758;
        }
    }
    ctx->pc = 0x247730u;
    // 0x247730: 0x8e020138
    ctx->pc = 0x247730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x247734: 0x30420400
    ctx->pc = 0x247734u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x247738: 0x3c014200
    ctx->pc = 0x247738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x24773c: 0x44811000
    ctx->pc = 0x24773cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x247740: 0x1040000a
    ctx->pc = 0x247740u;
    {
        const bool branch_taken_0x247740 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x247744u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x247740) {
            ctx->pc = 0x24776Cu;
            goto label_24776c;
        }
    }
    ctx->pc = 0x247748u;
    // 0x247748: 0x3c0142a0
    ctx->pc = 0x247748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x24774c: 0x44811000
    ctx->pc = 0x24774cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x247750: 0x10000007
    ctx->pc = 0x247750u;
    {
        const bool branch_taken_0x247750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247754u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x247750) {
            ctx->pc = 0x247770u;
            goto label_247770;
        }
    }
    ctx->pc = 0x247758u;
label_247758:
    // 0x247758: 0x30420010
    ctx->pc = 0x247758u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x24775c: 0x10400013
    ctx->pc = 0x24775Cu;
    {
        const bool branch_taken_0x24775c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x247760u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x24775c) {
            ctx->pc = 0x2477ACu;
            goto label_2477ac;
        }
    }
    ctx->pc = 0x247764u;
    // 0x247764: 0x3c014180
    ctx->pc = 0x247764u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x247768: 0x44811000
    ctx->pc = 0x247768u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_24776c:
    // 0x24776c: 0xc60008b4
    ctx->pc = 0x24776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247770:
    // 0x247770: 0x46020002
    ctx->pc = 0x247770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x247774: 0xc6010848
    ctx->pc = 0x247774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247778: 0x46010000
    ctx->pc = 0x247778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24777c: 0xe6000848
    ctx->pc = 0x24777cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2120), bits); }
    // 0x247780: 0xc60008b8
    ctx->pc = 0x247780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247784: 0x46020002
    ctx->pc = 0x247784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x247788: 0xc601084c
    ctx->pc = 0x247788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24778c: 0x46010000
    ctx->pc = 0x24778cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247790: 0xe600084c
    ctx->pc = 0x247790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2124), bits); }
    // 0x247794: 0xc60008bc
    ctx->pc = 0x247794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247798: 0x46020002
    ctx->pc = 0x247798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24779c: 0xc6010850
    ctx->pc = 0x24779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2477a0: 0x46010000
    ctx->pc = 0x2477a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2477a4: 0x1000000a
    ctx->pc = 0x2477A4u;
    {
        const bool branch_taken_0x2477a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2477A8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2128), bits); }
        if (branch_taken_0x2477a4) {
            ctx->pc = 0x2477D0u;
            goto label_2477d0;
        }
    }
    ctx->pc = 0x2477ACu;
label_2477ac:
    // 0x2477ac: 0x8e0208ac
    ctx->pc = 0x2477acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x2477b0: 0x30422000
    ctx->pc = 0x2477b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x2477b4: 0x14400006
    ctx->pc = 0x2477B4u;
    {
        const bool branch_taken_0x2477b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2477B8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2477b4) {
            ctx->pc = 0x2477D0u;
            goto label_2477d0;
        }
    }
    ctx->pc = 0x2477BCu;
    // 0x2477bc: 0x8e0208ac
    ctx->pc = 0x2477bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x2477c0: 0x30420080
    ctx->pc = 0x2477c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2477c4: 0x24110001
    ctx->pc = 0x2477c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2477c8: 0x24030002
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2477cc: 0x62880b
    ctx->pc = 0x2477ccu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2477d0:
    // 0x2477d0: 0x2a22000a
    ctx->pc = 0x2477d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 10));
    // 0x2477d4: 0x54400041
    ctx->pc = 0x2477D4u;
    {
        const bool branch_taken_0x2477d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2477d4) {
            ctx->pc = 0x2477D8u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
            ctx->pc = 0x2478DCu;
            goto label_2478dc;
        }
    }
    ctx->pc = 0x2477DCu;
    // 0x2477dc: 0xc60c08b4
    ctx->pc = 0x2477dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2477e0: 0xc0ba04a
    ctx->pc = 0x2477E0u;
    SET_GPR_U32(ctx, 31, 0x2477E8u);
    ctx->pc = 0x2477E4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477E8u; }
    }
    if (ctx->pc != 0x2477E8u) { return; }
    ctx->pc = 0x2477E8u;
    // 0x2477e8: 0x46000086
    ctx->pc = 0x2477e8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2477ec: 0x46141041
    ctx->pc = 0x2477ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x2477f0: 0x3c014049
    ctx->pc = 0x2477f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2477f4: 0x34210fdb
    ctx->pc = 0x2477f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2477f8: 0x44810000
    ctx->pc = 0x2477f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2477fc: 0x46010034
    ctx->pc = 0x2477fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247800: 0x45000006
    ctx->pc = 0x247800u;
    {
        const bool branch_taken_0x247800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247800) {
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x247808u;
    // 0x247808: 0x3c0140c9
    ctx->pc = 0x247808u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24780c: 0x34210fdb
    ctx->pc = 0x24780cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x247810: 0x44810000
    ctx->pc = 0x247810u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247814: 0x1000000c
    ctx->pc = 0x247814u;
    {
        const bool branch_taken_0x247814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247818u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x247814) {
            ctx->pc = 0x247848u;
            goto label_247848;
        }
    }
    ctx->pc = 0x24781Cu;
label_24781c:
    // 0x24781c: 0x3c01c049
    ctx->pc = 0x24781cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x247820: 0x34210fdb
    ctx->pc = 0x247820u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x247824: 0x44810000
    ctx->pc = 0x247824u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247828: 0x46000836
    ctx->pc = 0x247828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24782c: 0x0
    ctx->pc = 0x24782cu;
    // NOP
    // 0x247830: 0x45020006
    ctx->pc = 0x247830u;
    {
        const bool branch_taken_0x247830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247830) {
            ctx->pc = 0x247834u;
            ctx->f[1] = FPU_ABS_S(ctx->f[1]);
            ctx->pc = 0x24784Cu;
            goto label_24784c;
        }
    }
    ctx->pc = 0x247838u;
    // 0x247838: 0x3c0140c9
    ctx->pc = 0x247838u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24783c: 0x34210fdb
    ctx->pc = 0x24783cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x247840: 0x44810000
    ctx->pc = 0x247840u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247844: 0x46000840
    ctx->pc = 0x247844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_247848:
    // 0x247848: 0x46000845
    ctx->pc = 0x247848u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_24784c:
    // 0x24784c: 0x3c013fc9
    ctx->pc = 0x24784cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x247850: 0x34210fdb
    ctx->pc = 0x247850u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x247854: 0x44810000
    ctx->pc = 0x247854u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247858: 0x46010034
    ctx->pc = 0x247858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24785c: 0x45000006
    ctx->pc = 0x24785Cu;
    {
        const bool branch_taken_0x24785c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24785c) {
            ctx->pc = 0x247878u;
            goto label_247878;
        }
    }
    ctx->pc = 0x247864u;
    // 0x247864: 0x3c014049
    ctx->pc = 0x247864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x247868: 0x34210fdb
    ctx->pc = 0x247868u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24786c: 0x44810000
    ctx->pc = 0x24786cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247870: 0x46001080
    ctx->pc = 0x247870u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x247874: 0x26310001
    ctx->pc = 0x247874u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_247878:
    // 0x247878: 0x3c014049
    ctx->pc = 0x247878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x24787c: 0x34210fdb
    ctx->pc = 0x24787cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x247880: 0x44810000
    ctx->pc = 0x247880u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247884: 0x46020034
    ctx->pc = 0x247884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247888: 0x45000007
    ctx->pc = 0x247888u;
    {
        const bool branch_taken_0x247888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247888) {
            ctx->pc = 0x2478A8u;
            goto label_2478a8;
        }
    }
    ctx->pc = 0x247890u;
    // 0x247890: 0x3c0140c9
    ctx->pc = 0x247890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x247894: 0x34210fdb
    ctx->pc = 0x247894u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x247898: 0x44810000
    ctx->pc = 0x247898u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24789c: 0x46001001
    ctx->pc = 0x24789cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2478a0: 0x1000000d
    ctx->pc = 0x2478A0u;
    {
        const bool branch_taken_0x2478a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2478A4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x2478a0) {
            ctx->pc = 0x2478D8u;
            goto label_2478d8;
        }
    }
    ctx->pc = 0x2478A8u;
label_2478a8:
    // 0x2478a8: 0x3c01c049
    ctx->pc = 0x2478a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2478ac: 0x34210fdb
    ctx->pc = 0x2478acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2478b0: 0x44810000
    ctx->pc = 0x2478b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2478b4: 0x46001036
    ctx->pc = 0x2478b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2478b8: 0x0
    ctx->pc = 0x2478b8u;
    // NOP
    // 0x2478bc: 0x45020006
    ctx->pc = 0x2478BCu;
    {
        const bool branch_taken_0x2478bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2478bc) {
            ctx->pc = 0x2478C0u;
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
            ctx->pc = 0x2478D8u;
            goto label_2478d8;
        }
    }
    ctx->pc = 0x2478C4u;
    // 0x2478c4: 0x3c0140c9
    ctx->pc = 0x2478c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2478c8: 0x34210fdb
    ctx->pc = 0x2478c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2478cc: 0x44810000
    ctx->pc = 0x2478ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2478d0: 0x46001000
    ctx->pc = 0x2478d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2478d4: 0xe6400000
    ctx->pc = 0x2478d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2478d8:
    // 0x2478d8: 0x8e0508ac
    ctx->pc = 0x2478d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
label_2478dc:
    // 0x2478dc: 0x3c020100
    ctx->pc = 0x2478dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2478e0: 0xa21024
    ctx->pc = 0x2478e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2478e4: 0x14400005
    ctx->pc = 0x2478E4u;
    {
        const bool branch_taken_0x2478e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2478E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2478e4) {
            ctx->pc = 0x2478FCu;
            goto label_2478fc;
        }
    }
    ctx->pc = 0x2478ECu;
    // 0x2478ec: 0x26040060
    ctx->pc = 0x2478ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
    // 0x2478f0: 0xc09f6f0
    ctx->pc = 0x2478F0u;
    SET_GPR_U32(ctx, 31, 0x2478F8u);
    ctx->pc = 0x2478F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DBC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerHitCol_0x27dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478F8u; }
    }
    if (ctx->pc != 0x2478F8u) { return; }
    ctx->pc = 0x2478F8u;
    // 0x2478f8: 0x3c020034
    ctx->pc = 0x2478f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2478fc:
    // 0x2478fc: 0x260407b4
    ctx->pc = 0x2478fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1972));
    // 0x247900: 0x8c4554f0
    ctx->pc = 0x247900u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21744)));
    // 0x247904: 0x24060001
    ctx->pc = 0x247904u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x247908: 0x3c013f80
    ctx->pc = 0x247908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x24790c: 0x44816000
    ctx->pc = 0x24790cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x247910: 0xc09ffc6
    ctx->pc = 0x247910u;
    SET_GPR_U32(ctx, 31, 0x247918u);
    ctx->pc = 0x247914u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247918u; }
    }
    if (ctx->pc != 0x247918u) { return; }
    ctx->pc = 0x247918u;
    // 0x247918: 0x10000006
    ctx->pc = 0x247918u;
    {
        const bool branch_taken_0x247918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24791Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2228), GPR_U32(ctx, 0));
        if (branch_taken_0x247918) {
            ctx->pc = 0x247934u;
            goto label_247934;
        }
    }
    ctx->pc = 0x247920u;
label_247920:
    // 0x247920: 0x8e0208ac
    ctx->pc = 0x247920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x247924: 0x30420080
    ctx->pc = 0x247924u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x247928: 0x24030002
    ctx->pc = 0x247928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x24792c: 0x62880b
    ctx->pc = 0x24792cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
    // 0x247930: 0xae0008b4
    ctx->pc = 0x247930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2228), GPR_U32(ctx, 0));
label_247934:
    // 0x247934: 0xae0008b8
    ctx->pc = 0x247934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2232), GPR_U32(ctx, 0));
    // 0x247938: 0xae0008bc
    ctx->pc = 0x247938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2236), GPR_U32(ctx, 0));
    // 0x24793c: 0xae0008a8
    ctx->pc = 0x24793cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2216), GPR_U32(ctx, 0));
    // 0x247940: 0xae0008ac
    ctx->pc = 0x247940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 0));
    // 0x247944: 0x220102d
    ctx->pc = 0x247944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247948:
    // 0x247948: 0xdfbf0030
    ctx->pc = 0x247948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24794c: 0xdfb20020
    ctx->pc = 0x24794cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247950: 0xdfb10010
    ctx->pc = 0x247950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247954: 0xdfb00000
    ctx->pc = 0x247954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247958: 0xc7b40040
    ctx->pc = 0x247958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24795c: 0x3e00008
    ctx->pc = 0x24795Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247618u: goto label_247618;
            case 0x24763Cu: goto label_24763c;
            case 0x247674u: goto label_247674;
            case 0x247694u: goto label_247694;
            case 0x2476B4u: goto label_2476b4;
            case 0x247700u: goto label_247700;
            case 0x247720u: goto label_247720;
            case 0x247758u: goto label_247758;
            case 0x24776Cu: goto label_24776c;
            case 0x247770u: goto label_247770;
            case 0x2477ACu: goto label_2477ac;
            case 0x2477D0u: goto label_2477d0;
            case 0x24781Cu: goto label_24781c;
            case 0x247848u: goto label_247848;
            case 0x24784Cu: goto label_24784c;
            case 0x247878u: goto label_247878;
            case 0x2478A8u: goto label_2478a8;
            case 0x2478D8u: goto label_2478d8;
            case 0x2478DCu: goto label_2478dc;
            case 0x2478FCu: goto label_2478fc;
            case 0x247920u: goto label_247920;
            case 0x247934u: goto label_247934;
            case 0x247948u: goto label_247948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247964u;
}
