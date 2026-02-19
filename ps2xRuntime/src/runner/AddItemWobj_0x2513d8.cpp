#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddItemWobj
// Address: 0x2513d8 - 0x251664
void AddItemWobj_0x2513d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2513d8u;

    // 0x2513d8: 0x27bdff50
    ctx->pc = 0x2513d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2513dc: 0xffbf0080
    ctx->pc = 0x2513dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2513e0: 0xffb70070
    ctx->pc = 0x2513e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2513e4: 0xffb60060
    ctx->pc = 0x2513e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2513e8: 0xffb50050
    ctx->pc = 0x2513e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2513ec: 0xffb40040
    ctx->pc = 0x2513ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2513f0: 0xffb30030
    ctx->pc = 0x2513f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2513f4: 0xffb20020
    ctx->pc = 0x2513f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2513f8: 0xffb10010
    ctx->pc = 0x2513f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2513fc: 0xffb00000
    ctx->pc = 0x2513fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251400: 0xe7b600a0
    ctx->pc = 0x251400u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x251404: 0xe7b50098
    ctx->pc = 0x251404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x251408: 0xe7b40090
    ctx->pc = 0x251408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25140c: 0x80882d
    ctx->pc = 0x25140cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251410: 0x100902d
    ctx->pc = 0x251410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251414: 0x52c00
    ctx->pc = 0x251414u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x251418: 0x59c03
    ctx->pc = 0x251418u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 16));
    // 0x25141c: 0x326800ff
    ctx->pc = 0x25141cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 19), 255));
    // 0x251420: 0x4486a000
    ctx->pc = 0x251420u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 6);
    // 0x251424: 0x4680a520
    ctx->pc = 0x251424u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x251428: 0x3c013dcc
    ctx->pc = 0x251428u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x25142c: 0x3421cccd
    ctx->pc = 0x25142cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x251430: 0x44810000
    ctx->pc = 0x251430u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x251434: 0x4600a502
    ctx->pc = 0x251434u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x251438: 0x4487b000
    ctx->pc = 0x251438u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 7);
    // 0x25143c: 0x4680b5a0
    ctx->pc = 0x25143cu;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x251440: 0x8e220028
    ctx->pc = 0x251440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x251444: 0x14400007
    ctx->pc = 0x251444u;
    {
        const bool branch_taken_0x251444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251448u;
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x251444) {
            ctx->pc = 0x251464u;
            goto label_251464;
        }
    }
    ctx->pc = 0x25144Cu;
    // 0x25144c: 0x3c04003b
    ctx->pc = 0x25144cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x251450: 0x24848640
    ctx->pc = 0x251450u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936128));
    // 0x251454: 0xc0b492e
    ctx->pc = 0x251454u;
    SET_GPR_U32(ctx, 31, 0x25145Cu);
    ctx->pc = 0x251458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25145Cu; }
    }
    if (ctx->pc != 0x25145Cu) { return; }
    ctx->pc = 0x25145Cu;
label_25145c:
    // 0x25145c: 0x10000073
    ctx->pc = 0x25145Cu;
    {
        const bool branch_taken_0x25145c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x251460u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25145c) {
            ctx->pc = 0x25162Cu;
            goto label_25162c;
        }
    }
    ctx->pc = 0x251464u;
label_251464:
    // 0x251464: 0x3c020034
    ctx->pc = 0x251464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251468: 0x8c42d1b8
    ctx->pc = 0x251468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955448)));
    // 0x25146c: 0x18400045
    ctx->pc = 0x25146Cu;
    {
        const bool branch_taken_0x25146c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x251470u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25146c) {
            ctx->pc = 0x251584u;
            goto label_251584;
        }
    }
    ctx->pc = 0x251474u;
    // 0x251474: 0x3c020034
    ctx->pc = 0x251474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251478: 0x2443cf60
    ctx->pc = 0x251478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x25147c: 0x2502ffe5
    ctx->pc = 0x25147cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294967269));
    // 0x251480: 0x2c440003
    ctx->pc = 0x251480u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x251484: 0x3c02003c
    ctx->pc = 0x251484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x251488: 0x245423a0
    ctx->pc = 0x251488u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 9120));
    // 0x25148c: 0x4480a800
    ctx->pc = 0x25148cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x251490: 0x3c02003c
    ctx->pc = 0x251490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x251494: 0x24551ef0
    ctx->pc = 0x251494u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7920));
    // 0x251498: 0x3c02003c
    ctx->pc = 0x251498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25149c: 0x245625f8
    ctx->pc = 0x25149cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 9720));
    // 0x2514a0: 0x3c02003c
    ctx->pc = 0x2514a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2514a4: 0x24572850
    ctx->pc = 0x2514a4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 10320));
    // 0x2514a8: 0x101080
    ctx->pc = 0x2514a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2514ac: 0x0
    ctx->pc = 0x2514acu;
    // NOP
label_2514b0:
    // 0x2514b0: 0x431021
    ctx->pc = 0x2514b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2514b4: 0x8c420000
    ctx->pc = 0x2514b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2514b8: 0x5451002d
    ctx->pc = 0x2514B8u;
    {
        const bool branch_taken_0x2514b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x2514b8) {
            ctx->pc = 0x2514BCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x251570u;
            goto label_251570;
        }
    }
    ctx->pc = 0x2514C0u;
    // 0x2514c0: 0x96230014
    ctx->pc = 0x2514c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2514c4: 0x306600ff
    ctx->pc = 0x2514c4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 255));
    // 0x2514c8: 0x10c8000e
    ctx->pc = 0x2514C8u;
    {
        const bool branch_taken_0x2514c8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 8));
        ctx->pc = 0x2514CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967269));
        if (branch_taken_0x2514c8) {
            ctx->pc = 0x251504u;
            goto label_251504;
        }
    }
    ctx->pc = 0x2514D0u;
    // 0x2514d0: 0x2c420003
    ctx->pc = 0x2514d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x2514d4: 0x50400007
    ctx->pc = 0x2514D4u;
    {
        const bool branch_taken_0x2514d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2514d4) {
            ctx->pc = 0x2514D8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2514F4u;
            goto label_2514f4;
        }
    }
    ctx->pc = 0x2514DCu;
    // 0x2514dc: 0x10800004
    ctx->pc = 0x2514DCu;
    {
        const bool branch_taken_0x2514dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2514E0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65280));
        if (branch_taken_0x2514dc) {
            ctx->pc = 0x2514F0u;
            goto label_2514f0;
        }
    }
    ctx->pc = 0x2514E4u;
    // 0x2514e4: 0x3442001b
    ctx->pc = 0x2514e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27));
    // 0x2514e8: 0x10000006
    ctx->pc = 0x2514E8u;
    {
        const bool branch_taken_0x2514e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2514ECu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2514e8) {
            ctx->pc = 0x251504u;
            goto label_251504;
        }
    }
    ctx->pc = 0x2514F0u;
label_2514f0:
    // 0x2514f0: 0x3c04003b
    ctx->pc = 0x2514f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2514f4:
    // 0x2514f4: 0x24848660
    ctx->pc = 0x2514f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936160));
    // 0x2514f8: 0x220282d
    ctx->pc = 0x2514f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514fc: 0xc0b492e
    ctx->pc = 0x2514FCu;
    SET_GPR_U32(ctx, 31, 0x251504u);
    ctx->pc = 0x251500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251504u; }
    }
    if (ctx->pc != 0x251504u) { return; }
    ctx->pc = 0x251504u;
label_251504:
    // 0x251504: 0x101080
    ctx->pc = 0x251504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x251508: 0x541821
    ctx->pc = 0x251508u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x25150c: 0xc4600000
    ctx->pc = 0x25150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251510: 0x46150032
    ctx->pc = 0x251510u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251514: 0x0
    ctx->pc = 0x251514u;
    // NOP
    // 0x251518: 0x45000003
    ctx->pc = 0x251518u;
    {
        const bool branch_taken_0x251518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25151Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x251518) {
            ctx->pc = 0x251528u;
            goto label_251528;
        }
    }
    ctx->pc = 0x251520u;
    // 0x251520: 0xe4740000
    ctx->pc = 0x251520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251524: 0xe4540000
    ctx->pc = 0x251524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_251528:
    // 0x251528: 0x101080
    ctx->pc = 0x251528u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25152c: 0x561021
    ctx->pc = 0x25152cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x251530: 0xc4400000
    ctx->pc = 0x251530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251534: 0x46150032
    ctx->pc = 0x251534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251538: 0x0
    ctx->pc = 0x251538u;
    // NOP
    // 0x25153c: 0x45030001
    ctx->pc = 0x25153Cu;
    {
        const bool branch_taken_0x25153c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25153c) {
            ctx->pc = 0x251540u;
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->pc = 0x251544u;
            goto label_251544;
        }
    }
    ctx->pc = 0x251544u;
label_251544:
    // 0x251544: 0x101080
    ctx->pc = 0x251544u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x251548: 0x571021
    ctx->pc = 0x251548u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x25154c: 0xc4400000
    ctx->pc = 0x25154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251550: 0x46150036
    ctx->pc = 0x251550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251554: 0x0
    ctx->pc = 0x251554u;
    // NOP
    // 0x251558: 0x45020034
    ctx->pc = 0x251558u;
    {
        const bool branch_taken_0x251558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251558) {
            ctx->pc = 0x25155Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x25162Cu;
            goto label_25162c;
        }
    }
    ctx->pc = 0x251560u;
    // 0x251560: 0x44920000
    ctx->pc = 0x251560u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x251564: 0x46800020
    ctx->pc = 0x251564u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x251568: 0x1000ffbc
    ctx->pc = 0x251568u;
    {
        const bool branch_taken_0x251568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25156Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x251568) {
            ctx->pc = 0x25145Cu;
            goto label_25145c;
        }
    }
    ctx->pc = 0x251570u;
label_251570:
    // 0x251570: 0x3c020034
    ctx->pc = 0x251570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251574: 0x8c42d1b8
    ctx->pc = 0x251574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955448)));
    // 0x251578: 0x202102a
    ctx->pc = 0x251578u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x25157c: 0x1440ffcc
    ctx->pc = 0x25157Cu;
    {
        const bool branch_taken_0x25157c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251580u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x25157c) {
            ctx->pc = 0x2514B0u;
            goto label_2514b0;
        }
    }
    ctx->pc = 0x251584u;
label_251584:
    // 0x251584: 0x3c030034
    ctx->pc = 0x251584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x251588: 0x8c62d1b8
    ctx->pc = 0x251588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294955448)));
    // 0x25158c: 0x24420001
    ctx->pc = 0x25158cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x251590: 0xac62d1b8
    ctx->pc = 0x251590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955448), GPR_U32(ctx, 2));
    // 0x251594: 0x28420096
    ctx->pc = 0x251594u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 150));
    // 0x251598: 0x14400006
    ctx->pc = 0x251598u;
    {
        const bool branch_taken_0x251598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25159Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x251598) {
            ctx->pc = 0x2515B4u;
            goto label_2515b4;
        }
    }
    ctx->pc = 0x2515A0u;
    // 0x2515a0: 0x3c04003b
    ctx->pc = 0x2515a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2515a4: 0x24848690
    ctx->pc = 0x2515a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936208));
    // 0x2515a8: 0xc0b49a6
    ctx->pc = 0x2515A8u;
    SET_GPR_U32(ctx, 31, 0x2515B0u);
    ctx->pc = 0x2515ACu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2515B0u; }
    }
    if (ctx->pc != 0x2515B0u) { return; }
    ctx->pc = 0x2515B0u;
    // 0x2515b0: 0x3c020034
    ctx->pc = 0x2515b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2515b4:
    // 0x2515b4: 0x2442cf60
    ctx->pc = 0x2515b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x2515b8: 0x102080
    ctx->pc = 0x2515b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2515bc: 0x821021
    ctx->pc = 0x2515bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2515c0: 0xac510000
    ctx->pc = 0x2515c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2515c4: 0x3c02003c
    ctx->pc = 0x2515c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2515c8: 0x24422148
    ctx->pc = 0x2515c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8520));
    // 0x2515cc: 0x821021
    ctx->pc = 0x2515ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2515d0: 0x8e230028
    ctx->pc = 0x2515d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2515d4: 0xc4600034
    ctx->pc = 0x2515d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515d8: 0xe4400000
    ctx->pc = 0x2515d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2515dc: 0x3c02003c
    ctx->pc = 0x2515dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2515e0: 0x24421ef0
    ctx->pc = 0x2515e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7920));
    // 0x2515e4: 0x821021
    ctx->pc = 0x2515e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2515e8: 0xe4540000
    ctx->pc = 0x2515e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2515ec: 0x3c02003c
    ctx->pc = 0x2515ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2515f0: 0x244223a0
    ctx->pc = 0x2515f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9120));
    // 0x2515f4: 0x821021
    ctx->pc = 0x2515f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2515f8: 0xe4540000
    ctx->pc = 0x2515f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2515fc: 0x3c02003c
    ctx->pc = 0x2515fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x251600: 0x244225f8
    ctx->pc = 0x251600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9720));
    // 0x251604: 0x821021
    ctx->pc = 0x251604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251608: 0xe4560000
    ctx->pc = 0x251608u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25160c: 0x3c02003c
    ctx->pc = 0x25160cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x251610: 0x24422850
    ctx->pc = 0x251610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10320));
    // 0x251614: 0x822021
    ctx->pc = 0x251614u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251618: 0x44920000
    ctx->pc = 0x251618u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x25161c: 0x46800020
    ctx->pc = 0x25161cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x251620: 0xe4800000
    ctx->pc = 0x251620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x251624: 0xa6330014
    ctx->pc = 0x251624u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 19));
    // 0x251628: 0x200102d
    ctx->pc = 0x251628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25162c:
    // 0x25162c: 0xdfbf0080
    ctx->pc = 0x25162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251630: 0xdfb70070
    ctx->pc = 0x251630u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x251634: 0xdfb60060
    ctx->pc = 0x251634u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251638: 0xdfb50050
    ctx->pc = 0x251638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25163c: 0xdfb40040
    ctx->pc = 0x25163cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251640: 0xdfb30030
    ctx->pc = 0x251640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251644: 0xdfb20020
    ctx->pc = 0x251644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251648: 0xdfb10010
    ctx->pc = 0x251648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25164c: 0xdfb00000
    ctx->pc = 0x25164cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251650: 0xc7b600a0
    ctx->pc = 0x251650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x251654: 0xc7b50098
    ctx->pc = 0x251654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x251658: 0xc7b40090
    ctx->pc = 0x251658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25165c: 0x3e00008
    ctx->pc = 0x25165Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25145Cu: goto label_25145c;
            case 0x251464u: goto label_251464;
            case 0x2514B0u: goto label_2514b0;
            case 0x2514F0u: goto label_2514f0;
            case 0x2514F4u: goto label_2514f4;
            case 0x251504u: goto label_251504;
            case 0x251528u: goto label_251528;
            case 0x251544u: goto label_251544;
            case 0x251570u: goto label_251570;
            case 0x251584u: goto label_251584;
            case 0x2515B4u: goto label_2515b4;
            case 0x25162Cu: goto label_25162c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x251664u;
}
