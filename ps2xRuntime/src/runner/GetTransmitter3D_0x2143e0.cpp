#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetTransmitter3D
// Address: 0x2143e0 - 0x2145a8
void GetTransmitter3D_0x2143e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2143e0u;

    // 0x2143e0: 0x27bdffc0
    ctx->pc = 0x2143e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2143e4: 0xffbf0030
    ctx->pc = 0x2143e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2143e8: 0xffb10020
    ctx->pc = 0x2143e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2143ec: 0xffb00010
    ctx->pc = 0x2143ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2143f0: 0x44803000
    ctx->pc = 0x2143f0u;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 0);
    // 0x2143f4: 0x3c020034
    ctx->pc = 0x2143f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2143f8: 0x8c428b70
    ctx->pc = 0x2143f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x2143fc: 0x1c400003
    ctx->pc = 0x2143FCu;
    {
        const bool branch_taken_0x2143fc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x214400u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2143fc) {
            ctx->pc = 0x21440Cu;
            goto label_21440c;
        }
    }
    ctx->pc = 0x214404u;
    // 0x214404: 0x10000063
    ctx->pc = 0x214404u;
    {
        const bool branch_taken_0x214404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214408u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214404) {
            ctx->pc = 0x214594u;
            goto label_214594;
        }
    }
    ctx->pc = 0x21440Cu;
label_21440c:
    // 0x21440c: 0x3c020034
    ctx->pc = 0x21440cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x214410: 0x8c428b70
    ctx->pc = 0x214410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x214414: 0x18400031
    ctx->pc = 0x214414u;
    {
        const bool branch_taken_0x214414 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x214418u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214414) {
            ctx->pc = 0x2144DCu;
            goto label_2144dc;
        }
    }
    ctx->pc = 0x21441Cu;
    // 0x21441c: 0x3c020033
    ctx->pc = 0x21441cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x214420: 0x24484b70
    ctx->pc = 0x214420u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x214424: 0x3c020032
    ctx->pc = 0x214424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x214428: 0x8c47f7c0
    ctx->pc = 0x214428u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294965184)));
    // 0x21442c: 0x3c020034
    ctx->pc = 0x21442cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x214430: 0x8c468b70
    ctx->pc = 0x214430u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x214434: 0xc7a50000
    ctx->pc = 0x214434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x214438: 0xc7a40004
    ctx->pc = 0x214438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21443c: 0xc7a10008
    ctx->pc = 0x21443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214440: 0x51180
    ctx->pc = 0x214440u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x214444: 0x0
    ctx->pc = 0x214444u;
    // NOP
label_214448:
    // 0x214448: 0x481821
    ctx->pc = 0x214448u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x21444c: 0x90620000
    ctx->pc = 0x21444cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214450: 0x5440001c
    ctx->pc = 0x214450u;
    {
        const bool branch_taken_0x214450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x214450) {
            ctx->pc = 0x214454u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2144C4u;
            goto label_2144c4;
        }
    }
    ctx->pc = 0x214458u;
    // 0x214458: 0x50a7001a
    ctx->pc = 0x214458u;
    {
        const bool branch_taken_0x214458 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 7));
        if (branch_taken_0x214458) {
            ctx->pc = 0x21445Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2144C4u;
            goto label_2144c4;
        }
    }
    ctx->pc = 0x214460u;
    // 0x214460: 0xc4830000
    ctx->pc = 0x214460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214464: 0xc4600010
    ctx->pc = 0x214464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214468: 0x460018c1
    ctx->pc = 0x214468u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21446c: 0x46001946
    ctx->pc = 0x21446cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
    // 0x214470: 0xc4820004
    ctx->pc = 0x214470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214474: 0xc4600014
    ctx->pc = 0x214474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214478: 0x46001081
    ctx->pc = 0x214478u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21447c: 0x46001106
    ctx->pc = 0x21447cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x214480: 0xc4800008
    ctx->pc = 0x214480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214484: 0xc4610018
    ctx->pc = 0x214484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214488: 0x46010001
    ctx->pc = 0x214488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21448c: 0x46000046
    ctx->pc = 0x21448cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x214490: 0x460318c2
    ctx->pc = 0x214490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x214494: 0x46021082
    ctx->pc = 0x214494u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x214498: 0x460218c0
    ctx->pc = 0x214498u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x21449c: 0x46000002
    ctx->pc = 0x21449cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2144a0: 0x6000005
    ctx->pc = 0x2144A0u;
    {
        const bool branch_taken_0x2144a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2144A4u;
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x2144a0) {
            ctx->pc = 0x2144B8u;
            goto label_2144b8;
        }
    }
    ctx->pc = 0x2144A8u;
    // 0x2144a8: 0x46061834
    ctx->pc = 0x2144a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2144ac: 0x0
    ctx->pc = 0x2144acu;
    // NOP
    // 0x2144b0: 0x45020004
    ctx->pc = 0x2144B0u;
    {
        const bool branch_taken_0x2144b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2144b0) {
            ctx->pc = 0x2144B4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2144C4u;
            goto label_2144c4;
        }
    }
    ctx->pc = 0x2144B8u;
label_2144b8:
    // 0x2144b8: 0x46001986
    ctx->pc = 0x2144b8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x2144bc: 0xa0802d
    ctx->pc = 0x2144bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144c0: 0x24a50001
    ctx->pc = 0x2144c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2144c4:
    // 0x2144c4: 0xa6102a
    ctx->pc = 0x2144c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2144c8: 0x1440ffdf
    ctx->pc = 0x2144C8u;
    {
        const bool branch_taken_0x2144c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2144CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
        if (branch_taken_0x2144c8) {
            ctx->pc = 0x214448u;
            goto label_214448;
        }
    }
    ctx->pc = 0x2144D0u;
    // 0x2144d0: 0xe7a10008
    ctx->pc = 0x2144d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2144d4: 0xe7a40004
    ctx->pc = 0x2144d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2144d8: 0xe7a50000
    ctx->pc = 0x2144d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2144dc:
    // 0x2144dc: 0x3c030032
    ctx->pc = 0x2144dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2144e0: 0x8c62f7c0
    ctx->pc = 0x2144e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965184)));
    // 0x2144e4: 0x4430003
    ctx->pc = 0x2144E4u;
    {
        const bool branch_taken_0x2144e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2144e4) {
            ctx->pc = 0x2144E8u;
            SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
            ctx->pc = 0x2144F4u;
            goto label_2144f4;
        }
    }
    ctx->pc = 0x2144ECu;
    // 0x2144ec: 0x10000023
    ctx->pc = 0x2144ECu;
    {
        const bool branch_taken_0x2144ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2144F0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965184), GPR_U32(ctx, 16));
        if (branch_taken_0x2144ec) {
            ctx->pc = 0x21457Cu;
            goto label_21457c;
        }
    }
    ctx->pc = 0x2144F4u;
label_2144f4:
    // 0x2144f4: 0x24634b70
    ctx->pc = 0x2144f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19312));
    // 0x2144f8: 0x3c110032
    ctx->pc = 0x2144f8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x2144fc: 0x8e22f7c0
    ctx->pc = 0x2144fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294965184)));
    // 0x214500: 0x21180
    ctx->pc = 0x214500u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x214504: 0x431021
    ctx->pc = 0x214504u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214508: 0xc4830000
    ctx->pc = 0x214508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21450c: 0xc4400010
    ctx->pc = 0x21450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214510: 0x460018c1
    ctx->pc = 0x214510u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x214514: 0xe7a30000
    ctx->pc = 0x214514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x214518: 0xc4810004
    ctx->pc = 0x214518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21451c: 0xc4400014
    ctx->pc = 0x21451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214520: 0x46000841
    ctx->pc = 0x214520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x214524: 0xe7a10004
    ctx->pc = 0x214524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x214528: 0xc4800008
    ctx->pc = 0x214528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21452c: 0xc4420018
    ctx->pc = 0x21452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214530: 0x46020001
    ctx->pc = 0x214530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x214534: 0xe7a00008
    ctx->pc = 0x214534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x214538: 0x460318c2
    ctx->pc = 0x214538u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x21453c: 0x46010842
    ctx->pc = 0x21453cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x214540: 0x460118c0
    ctx->pc = 0x214540u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x214544: 0x46000002
    ctx->pc = 0x214544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x214548: 0x460018c0
    ctx->pc = 0x214548u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x21454c: 0x3c013ee3
    ctx->pc = 0x21454cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16099 << 16));
    // 0x214550: 0x34218e39
    ctx->pc = 0x214550u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 36409));
    // 0x214554: 0x44810000
    ctx->pc = 0x214554u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214558: 0x46001802
    ctx->pc = 0x214558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21455c: 0x46003036
    ctx->pc = 0x21455cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214560: 0x0
    ctx->pc = 0x214560u;
    // NOP
    // 0x214564: 0x45000005
    ctx->pc = 0x214564u;
    {
        const bool branch_taken_0x214564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214568u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x214564) {
            ctx->pc = 0x21457Cu;
            goto label_21457c;
        }
    }
    ctx->pc = 0x21456Cu;
    // 0x21456c: 0x8c440030
    ctx->pc = 0x21456cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x214570: 0xc0b40c0
    ctx->pc = 0x214570u;
    SET_GPR_U32(ctx, 31, 0x214578u);
    ctx->pc = 0x214574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214578u; }
    }
    if (ctx->pc != 0x214578u) { return; }
    ctx->pc = 0x214578u;
    // 0x214578: 0xae30f7c0
    ctx->pc = 0x214578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965184), GPR_U32(ctx, 16));
label_21457c:
    // 0x21457c: 0x3c020032
    ctx->pc = 0x21457cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x214580: 0x8c43f7c0
    ctx->pc = 0x214580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965184)));
    // 0x214584: 0x31980
    ctx->pc = 0x214584u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x214588: 0x3c020033
    ctx->pc = 0x214588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x21458c: 0x24424b70
    ctx->pc = 0x21458cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x214590: 0x621021
    ctx->pc = 0x214590u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_214594:
    // 0x214594: 0xdfbf0030
    ctx->pc = 0x214594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214598: 0xdfb10020
    ctx->pc = 0x214598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21459c: 0xdfb00010
    ctx->pc = 0x21459cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2145a0: 0x3e00008
    ctx->pc = 0x2145A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2145A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21440Cu: goto label_21440c;
            case 0x214448u: goto label_214448;
            case 0x2144B8u: goto label_2144b8;
            case 0x2144C4u: goto label_2144c4;
            case 0x2144DCu: goto label_2144dc;
            case 0x2144F4u: goto label_2144f4;
            case 0x21457Cu: goto label_21457c;
            case 0x214594u: goto label_214594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2145A8u;
}
