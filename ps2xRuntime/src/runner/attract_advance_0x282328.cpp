#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: attract_advance
// Address: 0x282328 - 0x282434
void attract_advance_0x282328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282328u;

    // 0x282328: 0x27bdffd0
    ctx->pc = 0x282328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28232c: 0xffbf0020
    ctx->pc = 0x28232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282330: 0xffb10010
    ctx->pc = 0x282330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x282334: 0xffb00000
    ctx->pc = 0x282334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282338: 0x80882d
    ctx->pc = 0x282338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28233c: 0x3c020031
    ctx->pc = 0x28233cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282340: 0xdc420e28
    ctx->pc = 0x282340u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x282344: 0x30420004
    ctx->pc = 0x282344u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x282348: 0x10400003
    ctx->pc = 0x282348u;
    {
        const bool branch_taken_0x282348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28234Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282348) {
            ctx->pc = 0x282358u;
            goto label_282358;
        }
    }
    ctx->pc = 0x282350u;
    // 0x282350: 0x10000033
    ctx->pc = 0x282350u;
    {
        const bool branch_taken_0x282350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282354u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282350) {
            ctx->pc = 0x282420u;
            goto label_282420;
        }
    }
    ctx->pc = 0x282358u;
label_282358:
    // 0x282358: 0x3c020031
    ctx->pc = 0x282358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28235c: 0xc441ffa8
    ctx->pc = 0x28235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282360: 0x44800000
    ctx->pc = 0x282360u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x282364: 0x46010034
    ctx->pc = 0x282364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282368: 0x0
    ctx->pc = 0x282368u;
    // NOP
    // 0x28236c: 0x45000012
    ctx->pc = 0x28236Cu;
    {
        const bool branch_taken_0x28236c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282370u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28236c) {
            ctx->pc = 0x2823B8u;
            goto label_2823b8;
        }
    }
    ctx->pc = 0x282374u;
    // 0x282374: 0xc441ffa4
    ctx->pc = 0x282374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282378: 0x3c013f00
    ctx->pc = 0x282378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28237c: 0x44810000
    ctx->pc = 0x28237cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x282380: 0x46010034
    ctx->pc = 0x282380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282384: 0x4500000c
    ctx->pc = 0x282384u;
    {
        const bool branch_taken_0x282384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x282384) {
            ctx->pc = 0x2823B8u;
            goto label_2823b8;
        }
    }
    ctx->pc = 0x28238Cu;
    // 0x28238c: 0xc081bae
    ctx->pc = 0x28238Cu;
    SET_GPR_U32(ctx, 31, 0x282394u);
    ctx->pc = 0x282390u;
    SET_GPR_U32(ctx, 4, ((uint32_t)3840 << 16));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282394u; }
    }
    if (ctx->pc != 0x282394u) { return; }
    ctx->pc = 0x282394u;
    // 0x282394: 0x10400003
    ctx->pc = 0x282394u;
    {
        const bool branch_taken_0x282394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x282394) {
            ctx->pc = 0x2823A4u;
            goto label_2823a4;
        }
    }
    ctx->pc = 0x28239Cu;
    // 0x28239c: 0x10000006
    ctx->pc = 0x28239Cu;
    {
        const bool branch_taken_0x28239c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2823A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28239c) {
            ctx->pc = 0x2823B8u;
            goto label_2823b8;
        }
    }
    ctx->pc = 0x2823A4u;
label_2823a4:
    // 0x2823a4: 0x16200004
    ctx->pc = 0x2823A4u;
    {
        const bool branch_taken_0x2823a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2823a4) {
            ctx->pc = 0x2823B8u;
            goto label_2823b8;
        }
    }
    ctx->pc = 0x2823ACu;
    // 0x2823ac: 0xc081c2c
    ctx->pc = 0x2823ACu;
    SET_GPR_U32(ctx, 31, 0x2823B4u);
    ctx->pc = 0x2070B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_no_assignment_0x2070b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2823B4u; }
    }
    if (ctx->pc != 0x2823B4u) { return; }
    ctx->pc = 0x2823B4u;
    // 0x2823b4: 0x40802d
    ctx->pc = 0x2823b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2823b8:
    // 0x2823b8: 0x1200000e
    ctx->pc = 0x2823B8u;
    {
        const bool branch_taken_0x2823b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2823BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2823b8) {
            ctx->pc = 0x2823F4u;
            goto label_2823f4;
        }
    }
    ctx->pc = 0x2823C0u;
    // 0x2823c0: 0x8c42f184
    ctx->pc = 0x2823c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2823c4: 0x10400007
    ctx->pc = 0x2823C4u;
    {
        const bool branch_taken_0x2823c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2823C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2823c4) {
            ctx->pc = 0x2823E4u;
            goto label_2823e4;
        }
    }
    ctx->pc = 0x2823CCu;
    // 0x2823cc: 0x8c43a2e0
    ctx->pc = 0x2823ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
    // 0x2823d0: 0x34028009
    ctx->pc = 0x2823d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
    // 0x2823d4: 0x10620004
    ctx->pc = 0x2823D4u;
    {
        const bool branch_taken_0x2823d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2823D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2823d4) {
            ctx->pc = 0x2823E8u;
            goto label_2823e8;
        }
    }
    ctx->pc = 0x2823DCu;
    // 0x2823dc: 0xc08026e
    ctx->pc = 0x2823DCu;
    SET_GPR_U32(ctx, 31, 0x2823E4u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2823E4u; }
    }
    if (ctx->pc != 0x2823E4u) { return; }
    ctx->pc = 0x2823E4u;
label_2823e4:
    // 0x2823e4: 0x3c030032
    ctx->pc = 0x2823e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_2823e8:
    // 0x2823e8: 0x24020001
    ctx->pc = 0x2823e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2823ec: 0x1000000b
    ctx->pc = 0x2823ECu;
    {
        const bool branch_taken_0x2823ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2823F0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1808), GPR_U32(ctx, 2));
        if (branch_taken_0x2823ec) {
            ctx->pc = 0x28241Cu;
            goto label_28241c;
        }
    }
    ctx->pc = 0x2823F4u;
label_2823f4:
    // 0x2823f4: 0xc081bae
    ctx->pc = 0x2823F4u;
    SET_GPR_U32(ctx, 31, 0x2823FCu);
    ctx->pc = 0x2823F8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16 << 16));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2823FCu; }
    }
    if (ctx->pc != 0x2823FCu) { return; }
    ctx->pc = 0x2823FCu;
    // 0x2823fc: 0x14400005
    ctx->pc = 0x2823FCu;
    {
        const bool branch_taken_0x2823fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282400u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x2823fc) {
            ctx->pc = 0x282414u;
            goto label_282414;
        }
    }
    ctx->pc = 0x282404u;
    // 0x282404: 0xc081bae
    ctx->pc = 0x282404u;
    SET_GPR_U32(ctx, 31, 0x28240Cu);
    ctx->pc = 0x282408u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32 << 16));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28240Cu; }
    }
    if (ctx->pc != 0x28240Cu) { return; }
    ctx->pc = 0x28240Cu;
    // 0x28240c: 0x10400003
    ctx->pc = 0x28240Cu;
    {
        const bool branch_taken_0x28240c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282410u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28240c) {
            ctx->pc = 0x28241Cu;
            goto label_28241c;
        }
    }
    ctx->pc = 0x282414u;
label_282414:
    // 0x282414: 0x24020001
    ctx->pc = 0x282414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282418: 0xac62a2d8
    ctx->pc = 0x282418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943448), GPR_U32(ctx, 2));
label_28241c:
    // 0x28241c: 0x200102d
    ctx->pc = 0x28241cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_282420:
    // 0x282420: 0xdfbf0020
    ctx->pc = 0x282420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282424: 0xdfb10010
    ctx->pc = 0x282424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282428: 0xdfb00000
    ctx->pc = 0x282428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28242c: 0x3e00008
    ctx->pc = 0x28242Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282358u: goto label_282358;
            case 0x2823A4u: goto label_2823a4;
            case 0x2823B8u: goto label_2823b8;
            case 0x2823E4u: goto label_2823e4;
            case 0x2823E8u: goto label_2823e8;
            case 0x2823F4u: goto label_2823f4;
            case 0x282414u: goto label_282414;
            case 0x28241Cu: goto label_28241c;
            case 0x282420u: goto label_282420;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282434u;
}
