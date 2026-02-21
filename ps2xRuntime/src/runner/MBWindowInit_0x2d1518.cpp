#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowInit
// Address: 0x2d1518 - 0x2d161c
void MBWindowInit_0x2d1518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1518u;

    // 0x2d1518: 0x27bdffe0
    ctx->pc = 0x2d1518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d151c: 0xffbf0010
    ctx->pc = 0x2d151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1520: 0xffb00000
    ctx->pc = 0x2d1520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1524: 0x3c020036
    ctx->pc = 0x2d1524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d1528: 0x8c43dee0
    ctx->pc = 0x2d1528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d152c: 0x3c02003a
    ctx->pc = 0x2d152cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1530: 0x8c501bd0
    ctx->pc = 0x2d1530u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2d1534: 0x8c620010
    ctx->pc = 0x2d1534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d1538: 0x8c430020
    ctx->pc = 0x2d1538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d153c: 0x10600003
    ctx->pc = 0x2D153Cu;
    {
        const bool branch_taken_0x2d153c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1540u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
        if (branch_taken_0x2d153c) {
            ctx->pc = 0x2D154Cu;
            goto label_2d154c;
        }
    }
    ctx->pc = 0x2D1544u;
    // 0x2d1544: 0x14400005
    ctx->pc = 0x2D1544u;
    {
        const bool branch_taken_0x2d1544 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d1544) {
            ctx->pc = 0x2D155Cu;
            goto label_2d155c;
        }
    }
    ctx->pc = 0x2D154Cu;
label_2d154c:
    // 0x2d154c: 0x3c020037
    ctx->pc = 0x2d154cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d1550: 0x8c438350
    ctx->pc = 0x2d1550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935376)));
    // 0x2d1554: 0x3c020037
    ctx->pc = 0x2d1554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d1558: 0x8c428358
    ctx->pc = 0x2d1558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935384)));
label_2d155c:
    // 0x2d155c: 0x44831000
    ctx->pc = 0x2d155cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x2d1560: 0x468010a0
    ctx->pc = 0x2d1560u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2d1564: 0xe6020014
    ctx->pc = 0x2d1564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d1568: 0x44821800
    ctx->pc = 0x2d1568u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x2d156c: 0x468018e0
    ctx->pc = 0x2d156cu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x2d1570: 0xe6030018
    ctx->pc = 0x2d1570u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d1574: 0x3c013f00
    ctx->pc = 0x2d1574u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d1578: 0x44810000
    ctx->pc = 0x2d1578u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d157c: 0x46001042
    ctx->pc = 0x2d157cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d1580: 0xe60101a0
    ctx->pc = 0x2d1580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2d1584: 0x46001802
    ctx->pc = 0x2d1584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d1588: 0xe60001a4
    ctx->pc = 0x2d1588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2d158c: 0xae0001a8
    ctx->pc = 0x2d158cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2d1590: 0xc60001a8
    ctx->pc = 0x2d1590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1594: 0xe600003c
    ctx->pc = 0x2d1594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2d1598: 0xe600004c
    ctx->pc = 0x2d1598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2d159c: 0xe6020040
    ctx->pc = 0x2d159cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2d15a0: 0xe6020050
    ctx->pc = 0x2d15a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2d15a4: 0xe6030044
    ctx->pc = 0x2d15a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2d15a8: 0xe6030054
    ctx->pc = 0x2d15a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2d15ac: 0xe6000048
    ctx->pc = 0x2d15acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2d15b0: 0xc0b4492
    ctx->pc = 0x2D15B0u;
    SET_GPR_U32(ctx, 31, 0x2D15B8u);
    ctx->pc = 0x2D15B4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->pc = 0x2D1248u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetAng_0x2d1248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15B8u; }
    }
    if (ctx->pc != 0x2D15B8u) { return; }
    ctx->pc = 0x2D15B8u;
    // 0x2d15b8: 0x3c013f80
    ctx->pc = 0x2d15b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d15bc: 0x44810800
    ctx->pc = 0x2d15bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d15c0: 0xe601005c
    ctx->pc = 0x2d15c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2d15c4: 0x3c014b7f
    ctx->pc = 0x2d15c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19327 << 16));
    // 0x2d15c8: 0x3421ff00
    ctx->pc = 0x2d15c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65280));
    // 0x2d15cc: 0x44810000
    ctx->pc = 0x2d15ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d15d0: 0xe6000060
    ctx->pc = 0x2d15d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2d15d4: 0xae000134
    ctx->pc = 0x2d15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x2d15d8: 0x3c014200
    ctx->pc = 0x2d15d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x2d15dc: 0x44810000
    ctx->pc = 0x2d15dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d15e0: 0xe6000138
    ctx->pc = 0x2d15e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x2d15e4: 0xe6010010
    ctx->pc = 0x2d15e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2d15e8: 0xe6010140
    ctx->pc = 0x2d15e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x2d15ec: 0x3c01bf00
    ctx->pc = 0x2d15ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
    // 0x2d15f0: 0x44810000
    ctx->pc = 0x2d15f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d15f4: 0xe6000144
    ctx->pc = 0x2d15f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x2d15f8: 0x3c04003a
    ctx->pc = 0x2d15f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d15fc: 0x24842550
    ctx->pc = 0x2d15fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x2d1600: 0xc0b5494
    ctx->pc = 0x2D1600u;
    SET_GPR_U32(ctx, 31, 0x2D1608u);
    ctx->pc = 0x2D1604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 240));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1608u; }
    }
    if (ctx->pc != 0x2D1608u) { return; }
    ctx->pc = 0x2D1608u;
    // 0x2d1608: 0x200102d
    ctx->pc = 0x2d1608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d160c: 0xdfbf0010
    ctx->pc = 0x2d160cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1610: 0xdfb00000
    ctx->pc = 0x2d1610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1614: 0x3e00008
    ctx->pc = 0x2D1614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1618u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D154Cu: goto label_2d154c;
            case 0x2D155Cu: goto label_2d155c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D161Cu;
}
