#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerDamageItem
// Address: 0x247340 - 0x24743c
void PlayerDamageItem_0x247340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247340u;

    // 0x247340: 0x27bdffc0
    ctx->pc = 0x247340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x247344: 0xffbf0030
    ctx->pc = 0x247344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x247348: 0xffb10020
    ctx->pc = 0x247348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24734c: 0xffb00010
    ctx->pc = 0x24734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x247350: 0x80882d
    ctx->pc = 0x247350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247354: 0xa0802d
    ctx->pc = 0x247354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247358: 0x44800000
    ctx->pc = 0x247358u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x24735c: 0x46006032
    ctx->pc = 0x24735cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247360: 0x0
    ctx->pc = 0x247360u;
    // NOP
    // 0x247364: 0x45000002
    ctx->pc = 0x247364u;
    {
        const bool branch_taken_0x247364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247368u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x247364) {
            ctx->pc = 0x247370u;
            goto label_247370;
        }
    }
    ctx->pc = 0x24736Cu;
    // 0x24736c: 0xc62c0118
    ctx->pc = 0x24736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_247370:
    // 0x247370: 0x1200002d
    ctx->pc = 0x247370u;
    {
        const bool branch_taken_0x247370 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x247374u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x247370) {
            ctx->pc = 0x247428u;
            goto label_247428;
        }
    }
    ctx->pc = 0x247378u;
    // 0x247378: 0xc6000050
    ctx->pc = 0x247378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24737c: 0xe7a00000
    ctx->pc = 0x24737cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x247380: 0xc6010054
    ctx->pc = 0x247380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247384: 0xc6000058
    ctx->pc = 0x247384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247388: 0xe7a00008
    ctx->pc = 0x247388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24738c: 0x3c014040
    ctx->pc = 0x24738cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x247390: 0x44810000
    ctx->pc = 0x247390u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247394: 0x46000840
    ctx->pc = 0x247394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247398: 0xe7a10004
    ctx->pc = 0x247398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24739c: 0xc096992
    ctx->pc = 0x24739Cu;
    SET_GPR_U32(ctx, 31, 0x2473A4u);
    ctx->pc = 0x2473A0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x25A648u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageItem_0x25a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473A4u; }
    }
    if (ctx->pc != 0x2473A4u) { return; }
    ctx->pc = 0x2473A4u;
    // 0x2473a4: 0x46000046
    ctx->pc = 0x2473a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2473a8: 0x44800000
    ctx->pc = 0x2473a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2473ac: 0x46000832
    ctx->pc = 0x2473acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2473b0: 0x0
    ctx->pc = 0x2473b0u;
    // NOP
    // 0x2473b4: 0x45010003
    ctx->pc = 0x2473B4u;
    {
        const bool branch_taken_0x2473b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2473B8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2473b4) {
            ctx->pc = 0x2473C4u;
            goto label_2473c4;
        }
    }
    ctx->pc = 0x2473BCu;
    // 0x2473bc: 0x302d
    ctx->pc = 0x2473bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473c0: 0x44800000
    ctx->pc = 0x2473c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2473c4:
    // 0x2473c4: 0x46010036
    ctx->pc = 0x2473c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2473c8: 0x0
    ctx->pc = 0x2473c8u;
    // NOP
    // 0x2473cc: 0x45000016
    ctx->pc = 0x2473CCu;
    {
        const bool branch_taken_0x2473cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2473D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2473cc) {
            ctx->pc = 0x247428u;
            goto label_247428;
        }
    }
    ctx->pc = 0x2473D4u;
    // 0x2473d4: 0xc0a43c8
    ctx->pc = 0x2473D4u;
    SET_GPR_U32(ctx, 31, 0x2473DCu);
    ctx->pc = 0x2473D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDamagedItem_0x290f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473DCu; }
    }
    if (ctx->pc != 0x2473DCu) { return; }
    ctx->pc = 0x2473DCu;
    // 0x2473dc: 0x8e020000
    ctx->pc = 0x2473dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2473e0: 0x8c430000
    ctx->pc = 0x2473e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2473e4: 0x24020003
    ctx->pc = 0x2473e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2473e8: 0x1062000c
    ctx->pc = 0x2473E8u;
    {
        const bool branch_taken_0x2473e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2473ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x2473e8) {
            ctx->pc = 0x24741Cu;
            goto label_24741c;
        }
    }
    ctx->pc = 0x2473F0u;
    // 0x2473f0: 0x8e040000
    ctx->pc = 0x2473f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2473f4: 0x8c830000
    ctx->pc = 0x2473f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2473f8: 0x1462000c
    ctx->pc = 0x2473F8u;
    {
        const bool branch_taken_0x2473f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2473FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2473f8) {
            ctx->pc = 0x24742Cu;
            goto label_24742c;
        }
    }
    ctx->pc = 0x247400u;
    // 0x247400: 0x80820028
    ctx->pc = 0x247400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x247404: 0x14400006
    ctx->pc = 0x247404u;
    {
        const bool branch_taken_0x247404 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x247408u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x247404) {
            ctx->pc = 0x247420u;
            goto label_247420;
        }
    }
    ctx->pc = 0x24740Cu;
    // 0x24740c: 0x24040014
    ctx->pc = 0x24740cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x247410: 0x8e250000
    ctx->pc = 0x247410u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247414: 0xc0a3a1c
    ctx->pc = 0x247414u;
    SET_GPR_U32(ctx, 31, 0x24741Cu);
    ctx->pc = 0x247418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24741Cu; }
    }
    if (ctx->pc != 0x24741Cu) { return; }
    ctx->pc = 0x24741Cu;
label_24741c:
    // 0x24741c: 0x3c030032
    ctx->pc = 0x24741cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_247420:
    // 0x247420: 0x24020001
    ctx->pc = 0x247420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x247424: 0xac6207f0
    ctx->pc = 0x247424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2032), GPR_U32(ctx, 2));
label_247428:
    // 0x247428: 0xdfbf0030
    ctx->pc = 0x247428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24742c:
    // 0x24742c: 0xdfb10020
    ctx->pc = 0x24742cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247430: 0xdfb00010
    ctx->pc = 0x247430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247434: 0x3e00008
    ctx->pc = 0x247434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247438u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247370u: goto label_247370;
            case 0x2473C4u: goto label_2473c4;
            case 0x24741Cu: goto label_24741c;
            case 0x247420u: goto label_247420;
            case 0x247428u: goto label_247428;
            case 0x24742Cu: goto label_24742c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24743Cu;
}
