#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerDamagePlayer
// Address: 0x247440 - 0x2475d8
void PlayerDamagePlayer_0x247440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247440u;

    // 0x247440: 0x27bdff30
    ctx->pc = 0x247440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x247444: 0xffbf00a0
    ctx->pc = 0x247444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x247448: 0xffbe0090
    ctx->pc = 0x247448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x24744c: 0xffb70080
    ctx->pc = 0x24744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x247450: 0xffb60070
    ctx->pc = 0x247450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x247454: 0xffb50060
    ctx->pc = 0x247454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x247458: 0xffb40050
    ctx->pc = 0x247458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24745c: 0xffb30040
    ctx->pc = 0x24745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x247460: 0xffb20030
    ctx->pc = 0x247460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x247464: 0xffb10020
    ctx->pc = 0x247464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x247468: 0xffb00010
    ctx->pc = 0x247468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24746c: 0xe7b600c0
    ctx->pc = 0x24746cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x247470: 0xe7b500b8
    ctx->pc = 0x247470u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x247474: 0xe7b400b0
    ctx->pc = 0x247474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x247478: 0x80882d
    ctx->pc = 0x247478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24747c: 0xa0982d
    ctx->pc = 0x24747cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247480: 0x46006546
    ctx->pc = 0x247480u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x247484: 0xc0a82d
    ctx->pc = 0x247484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247488: 0x2414ffff
    ctx->pc = 0x247488u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24748c: 0xc6200828
    ctx->pc = 0x24748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247490: 0x3c014000
    ctx->pc = 0x247490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x247494: 0x44810800
    ctx->pc = 0x247494u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247498: 0x46010500
    ctx->pc = 0x247498u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24749c: 0x902d
    ctx->pc = 0x24749cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474a0: 0x241e2b00
    ctx->pc = 0x2474a0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2474a4: 0x3c020032
    ctx->pc = 0x2474a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2474a8: 0x24571bc0
    ctx->pc = 0x2474a8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2474ac: 0x24160001
    ctx->pc = 0x2474acu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2474b0: 0x3c013f34
    ctx->pc = 0x2474b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x2474b4: 0x3421fdf4
    ctx->pc = 0x2474b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x2474b8: 0x4481b000
    ctx->pc = 0x2474b8u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x2474bc: 0x25e1018
    ctx->pc = 0x2474bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2474c0:
    // 0x2474c0: 0x578021
    ctx->pc = 0x2474c0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2474c4: 0x5211002b
    ctx->pc = 0x2474C4u;
    {
        const bool branch_taken_0x2474c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 17));
        if (branch_taken_0x2474c4) {
            ctx->pc = 0x2474C8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x247574u;
            goto label_247574;
        }
    }
    ctx->pc = 0x2474CCu;
    // 0x2474cc: 0x8e0200fc
    ctx->pc = 0x2474ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2474d0: 0x54560028
    ctx->pc = 0x2474D0u;
    {
        const bool branch_taken_0x2474d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x2474d0) {
            ctx->pc = 0x2474D4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x247574u;
            goto label_247574;
        }
    }
    ctx->pc = 0x2474D8u;
    // 0x2474d8: 0xc6000050
    ctx->pc = 0x2474d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2474dc: 0xc6210050
    ctx->pc = 0x2474dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2474e0: 0x46010001
    ctx->pc = 0x2474e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2474e4: 0xe7a00000
    ctx->pc = 0x2474e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2474e8: 0xc6000054
    ctx->pc = 0x2474e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2474ec: 0xc6210054
    ctx->pc = 0x2474ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2474f0: 0x46010001
    ctx->pc = 0x2474f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2474f4: 0xe7a00004
    ctx->pc = 0x2474f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2474f8: 0xc6000058
    ctx->pc = 0x2474f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2474fc: 0xc6210058
    ctx->pc = 0x2474fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247500: 0x46010001
    ctx->pc = 0x247500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x247504: 0xe7a00008
    ctx->pc = 0x247504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x247508: 0xc0b58a4
    ctx->pc = 0x247508u;
    SET_GPR_U32(ctx, 31, 0x247510u);
    ctx->pc = 0x24750Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247510u; }
    }
    if (ctx->pc != 0x247510u) { return; }
    ctx->pc = 0x247510u;
    // 0x247510: 0x460000c6
    ctx->pc = 0x247510u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x247514: 0xc7a20000
    ctx->pc = 0x247514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247518: 0xc6600000
    ctx->pc = 0x247518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24751c: 0x46001082
    ctx->pc = 0x24751cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x247520: 0xc7a00004
    ctx->pc = 0x247520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247524: 0xc6610004
    ctx->pc = 0x247524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247528: 0x46010002
    ctx->pc = 0x247528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24752c: 0x46001080
    ctx->pc = 0x24752cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x247530: 0xc7a00008
    ctx->pc = 0x247530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247534: 0xc6610008
    ctx->pc = 0x247534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247538: 0x46010002
    ctx->pc = 0x247538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24753c: 0x46001080
    ctx->pc = 0x24753cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x247540: 0x46161034
    ctx->pc = 0x247540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247544: 0x0
    ctx->pc = 0x247544u;
    // NOP
    // 0x247548: 0x4503000a
    ctx->pc = 0x247548u;
    {
        const bool branch_taken_0x247548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247548) {
            ctx->pc = 0x24754Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x247574u;
            goto label_247574;
        }
    }
    ctx->pc = 0x247550u;
    // 0x247550: 0xc6000828
    ctx->pc = 0x247550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247554: 0x460018c1
    ctx->pc = 0x247554u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x247558: 0x4603a036
    ctx->pc = 0x247558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24755c: 0x0
    ctx->pc = 0x24755cu;
    // NOP
    // 0x247560: 0x45030004
    ctx->pc = 0x247560u;
    {
        const bool branch_taken_0x247560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247560) {
            ctx->pc = 0x247564u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x247574u;
            goto label_247574;
        }
    }
    ctx->pc = 0x247568u;
    // 0x247568: 0x46001d06
    ctx->pc = 0x247568u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x24756c: 0x240a02d
    ctx->pc = 0x24756cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247570: 0x26520001
    ctx->pc = 0x247570u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_247574:
    // 0x247574: 0x2a420004
    ctx->pc = 0x247574u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x247578: 0x1440ffd1
    ctx->pc = 0x247578u;
    {
        const bool branch_taken_0x247578 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24757Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x247578) {
            ctx->pc = 0x2474C0u;
            goto label_2474c0;
        }
    }
    ctx->pc = 0x247580u;
    // 0x247580: 0x6800006
    ctx->pc = 0x247580u;
    {
        const bool branch_taken_0x247580 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x247584u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x247580) {
            ctx->pc = 0x24759Cu;
            goto label_24759c;
        }
    }
    ctx->pc = 0x247588u;
    // 0x247588: 0x4600ab06
    ctx->pc = 0x247588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x24758c: 0x24050002
    ctx->pc = 0x24758cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x247590: 0x2a0302d
    ctx->pc = 0x247590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247594: 0xc08c73c
    ctx->pc = 0x247594u;
    SET_GPR_U32(ctx, 31, 0x24759Cu);
    ctx->pc = 0x247598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24759Cu; }
    }
    if (ctx->pc != 0x24759Cu) { return; }
    ctx->pc = 0x24759Cu;
label_24759c:
    // 0x24759c: 0xdfbf00a0
    ctx->pc = 0x24759cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2475a0: 0xdfbe0090
    ctx->pc = 0x2475a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2475a4: 0xdfb70080
    ctx->pc = 0x2475a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2475a8: 0xdfb60070
    ctx->pc = 0x2475a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2475ac: 0xdfb50060
    ctx->pc = 0x2475acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2475b0: 0xdfb40050
    ctx->pc = 0x2475b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2475b4: 0xdfb30040
    ctx->pc = 0x2475b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2475b8: 0xdfb20030
    ctx->pc = 0x2475b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2475bc: 0xdfb10020
    ctx->pc = 0x2475bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2475c0: 0xdfb00010
    ctx->pc = 0x2475c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2475c4: 0xc7b600c0
    ctx->pc = 0x2475c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2475c8: 0xc7b500b8
    ctx->pc = 0x2475c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2475cc: 0xc7b400b0
    ctx->pc = 0x2475ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2475d0: 0x3e00008
    ctx->pc = 0x2475D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2475D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2474C0u: goto label_2474c0;
            case 0x247574u: goto label_247574;
            case 0x24759Cu: goto label_24759c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2475D8u;
}
