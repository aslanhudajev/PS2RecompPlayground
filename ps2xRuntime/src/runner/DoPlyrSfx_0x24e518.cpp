#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoPlyrSfx
// Address: 0x24e518 - 0x24e770
void DoPlyrSfx_0x24e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24e518u;

label_24e518:
    // 0x24e518: 0x27bdff20
    ctx->pc = 0x24e518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x24e51c: 0xffbf00d0
    ctx->pc = 0x24e51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x24e520: 0xffb600c0
    ctx->pc = 0x24e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x24e524: 0xffb500b0
    ctx->pc = 0x24e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x24e528: 0xffb400a0
    ctx->pc = 0x24e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x24e52c: 0xffb30090
    ctx->pc = 0x24e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x24e530: 0xffb20080
    ctx->pc = 0x24e530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x24e534: 0xffb10070
    ctx->pc = 0x24e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x24e538: 0xffb00060
    ctx->pc = 0x24e538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x24e53c: 0x80902d
    ctx->pc = 0x24e53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e540: 0xc0982d
    ctx->pc = 0x24e540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e544: 0xe0a02d
    ctx->pc = 0x24e544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e548: 0x100b02d
    ctx->pc = 0x24e548u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e54c: 0x8e420000
    ctx->pc = 0x24e54cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24e550: 0x4a10003
    ctx->pc = 0x24E550u;
    {
        const bool branch_taken_0x24e550 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x24E554u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x24e550) {
            ctx->pc = 0x24E560u;
            goto label_24e560;
        }
    }
    ctx->pc = 0x24E558u;
    // 0x24e558: 0x1000007b
    ctx->pc = 0x24E558u;
    {
        const bool branch_taken_0x24e558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E55Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x24e558) {
            ctx->pc = 0x24E748u;
            goto label_24e748;
        }
    }
    ctx->pc = 0x24E560u;
label_24e560:
    // 0x24e560: 0x3c030033
    ctx->pc = 0x24e560u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x24e564: 0x24634910
    ctx->pc = 0x24e564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x24e568: 0x21080
    ctx->pc = 0x24e568u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x24e56c: 0x431021
    ctx->pc = 0x24e56cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e570: 0x8c430000
    ctx->pc = 0x24e570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e574: 0x24020050
    ctx->pc = 0x24e574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x24e578: 0xa21018
    ctx->pc = 0x24e578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24e57c: 0x8c630004
    ctx->pc = 0x24e57cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24e580: 0x438021
    ctx->pc = 0x24e580u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e584: 0x8e110000
    ctx->pc = 0x24e584u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e588: 0x32220400
    ctx->pc = 0x24e588u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1024));
    // 0x24e58c: 0x10400009
    ctx->pc = 0x24E58Cu;
    {
        const bool branch_taken_0x24e58c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E590u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x24e58c) {
            ctx->pc = 0x24E5B4u;
            goto label_24e5b4;
        }
    }
    ctx->pc = 0x24E594u;
    // 0x24e594: 0x8e440080
    ctx->pc = 0x24e594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x24e598: 0xc0b41b8
    ctx->pc = 0x24E598u;
    SET_GPR_U32(ctx, 31, 0x24E5A0u);
    ctx->pc = 0x24E59Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5A0u; }
    }
    if (ctx->pc != 0x24E5A0u) { return; }
    ctx->pc = 0x24E5A0u;
    // 0x24e5a0: 0x8e420080
    ctx->pc = 0x24e5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x24e5a4: 0x8c440078
    ctx->pc = 0x24e5a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x24e5a8: 0x24050002
    ctx->pc = 0x24e5a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e5ac: 0xc0b41b8
    ctx->pc = 0x24E5ACu;
    SET_GPR_U32(ctx, 31, 0x24E5B4u);
    ctx->pc = 0x24E5B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5B4u; }
    }
    if (ctx->pc != 0x24E5B4u) { return; }
    ctx->pc = 0x24E5B4u;
label_24e5b4:
    // 0x24e5b4: 0x32220100
    ctx->pc = 0x24e5b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 256));
    // 0x24e5b8: 0x10400005
    ctx->pc = 0x24E5B8u;
    {
        const bool branch_taken_0x24e5b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E5BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e5b8) {
            ctx->pc = 0x24E5D0u;
            goto label_24e5d0;
        }
    }
    ctx->pc = 0x24E5C0u;
    // 0x24e5c0: 0xc0937e4
    ctx->pc = 0x24E5C0u;
    SET_GPR_U32(ctx, 31, 0x24E5C8u);
    ctx->pc = 0x24E5C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PsfxDoTexmodNode_0x24df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5C8u; }
    }
    if (ctx->pc != 0x24E5C8u) { return; }
    ctx->pc = 0x24E5C8u;
    // 0x24e5c8: 0x1000003f
    ctx->pc = 0x24E5C8u;
    {
        const bool branch_taken_0x24e5c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E5CCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x24e5c8) {
            ctx->pc = 0x24E6C8u;
            goto label_24e6c8;
        }
    }
    ctx->pc = 0x24E5D0u;
label_24e5d0:
    // 0x24e5d0: 0x3c020f00
    ctx->pc = 0x24e5d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3840 << 16));
    // 0x24e5d4: 0x2221024
    ctx->pc = 0x24e5d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24e5d8: 0x10400005
    ctx->pc = 0x24E5D8u;
    {
        const bool branch_taken_0x24e5d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E5DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e5d8) {
            ctx->pc = 0x24E5F0u;
            goto label_24e5f0;
        }
    }
    ctx->pc = 0x24E5E0u;
    // 0x24e5e0: 0xc0937ee
    ctx->pc = 0x24E5E0u;
    SET_GPR_U32(ctx, 31, 0x24E5E8u);
    ctx->pc = 0x24E5E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PsfxDoParticle_0x24dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E5E8u; }
    }
    if (ctx->pc != 0x24E5E8u) { return; }
    ctx->pc = 0x24E5E8u;
    // 0x24e5e8: 0x10000037
    ctx->pc = 0x24E5E8u;
    {
        const bool branch_taken_0x24e5e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E5ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x24e5e8) {
            ctx->pc = 0x24E6C8u;
            goto label_24e6c8;
        }
    }
    ctx->pc = 0x24E5F0u;
label_24e5f0:
    // 0x24e5f0: 0x32220200
    ctx->pc = 0x24e5f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 512));
    // 0x24e5f4: 0x54400034
    ctx->pc = 0x24E5F4u;
    {
        const bool branch_taken_0x24e5f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24e5f4) {
            ctx->pc = 0x24E5F8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x24E6C8u;
            goto label_24e6c8;
        }
    }
    ctx->pc = 0x24E5FCu;
    // 0x24e5fc: 0x56800007
    ctx->pc = 0x24E5FCu;
    {
        const bool branch_taken_0x24e5fc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x24e5fc) {
            ctx->pc = 0x24E600u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24E61Cu;
            goto label_24e61c;
        }
    }
    ctx->pc = 0x24E604u;
    // 0x24e604: 0x26040034
    ctx->pc = 0x24e604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 52));
    // 0x24e608: 0x27a50050
    ctx->pc = 0x24e608u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x24e60c: 0xc0b585c
    ctx->pc = 0x24E60Cu;
    SET_GPR_U32(ctx, 31, 0x24E614u);
    ctx->pc = 0x24E610u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x2D6170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat3_0x2d6170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E614u; }
    }
    if (ctx->pc != 0x24E614u) { return; }
    ctx->pc = 0x24E614u;
    // 0x24e614: 0x10000007
    ctx->pc = 0x24E614u;
    {
        const bool branch_taken_0x24e614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E618u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x24e614) {
            ctx->pc = 0x24E634u;
            goto label_24e634;
        }
    }
    ctx->pc = 0x24E61Cu;
label_24e61c:
    // 0x24e61c: 0xe7a00050
    ctx->pc = 0x24e61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24e620: 0xc6000038
    ctx->pc = 0x24e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e624: 0xe7a00054
    ctx->pc = 0x24e624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x24e628: 0xc600003c
    ctx->pc = 0x24e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e62c: 0xe7a00058
    ctx->pc = 0x24e62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24e630: 0x32220001
    ctx->pc = 0x24e630u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_24e634:
    // 0x24e634: 0x10400008
    ctx->pc = 0x24E634u;
    {
        const bool branch_taken_0x24e634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E638u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24e634) {
            ctx->pc = 0x24E658u;
            goto label_24e658;
        }
    }
    ctx->pc = 0x24E63Cu;
    // 0x24e63c: 0xe7a00040
    ctx->pc = 0x24e63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24e640: 0xc7a00054
    ctx->pc = 0x24e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e644: 0xe7a00044
    ctx->pc = 0x24e644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24e648: 0xc7a00058
    ctx->pc = 0x24e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e64c: 0xe7a00048
    ctx->pc = 0x24e64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24e650: 0x10000014
    ctx->pc = 0x24E650u;
    {
        const bool branch_taken_0x24e650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E654u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x24e650) {
            ctx->pc = 0x24E6A4u;
            goto label_24e6a4;
        }
    }
    ctx->pc = 0x24E658u;
label_24e658:
    // 0x24e658: 0x1260000c
    ctx->pc = 0x24E658u;
    {
        const bool branch_taken_0x24e658 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E65Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x24e658) {
            ctx->pc = 0x24E68Cu;
            goto label_24e68c;
        }
    }
    ctx->pc = 0x24E660u;
    // 0x24e660: 0xc6600000
    ctx->pc = 0x24e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e664: 0x46010000
    ctx->pc = 0x24e664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e668: 0xe7a00040
    ctx->pc = 0x24e668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24e66c: 0xc6600004
    ctx->pc = 0x24e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e670: 0xc7a10054
    ctx->pc = 0x24e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e674: 0x46010000
    ctx->pc = 0x24e674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e678: 0xe7a00044
    ctx->pc = 0x24e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24e67c: 0xc6600008
    ctx->pc = 0x24e67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e680: 0xc7a10058
    ctx->pc = 0x24e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e684: 0x10000006
    ctx->pc = 0x24E684u;
    {
        const bool branch_taken_0x24e684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E688u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x24e684) {
            ctx->pc = 0x24E6A0u;
            goto label_24e6a0;
        }
    }
    ctx->pc = 0x24E68Cu;
label_24e68c:
    // 0x24e68c: 0xc7a00050
    ctx->pc = 0x24e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e690: 0xe7a00040
    ctx->pc = 0x24e690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24e694: 0xc7a00054
    ctx->pc = 0x24e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e698: 0xe7a00044
    ctx->pc = 0x24e698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24e69c: 0xc7a00058
    ctx->pc = 0x24e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e6a0:
    // 0x24e6a0: 0xe7a00048
    ctx->pc = 0x24e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_24e6a4:
    // 0x24e6a4: 0x240202d
    ctx->pc = 0x24e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6a8: 0x200282d
    ctx->pc = 0x24e6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6ac: 0x27a60040
    ctx->pc = 0x24e6acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x24e6b0: 0x280382d
    ctx->pc = 0x24e6b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6b4: 0x220402d
    ctx->pc = 0x24e6b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6b8: 0xc093890
    ctx->pc = 0x24E6B8u;
    SET_GPR_U32(ctx, 31, 0x24E6C0u);
    ctx->pc = 0x24E6BCu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24E240u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlyrSfxSub_0x24e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E6C0u; }
    }
    if (ctx->pc != 0x24E6C0u) { return; }
    ctx->pc = 0x24E6C0u;
    // 0x24e6c0: 0x40a82d
    ctx->pc = 0x24e6c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6c4: 0x8e04000c
    ctx->pc = 0x24e6c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24e6c8:
    // 0x24e6c8: 0x4800008
    ctx->pc = 0x24E6C8u;
    {
        const bool branch_taken_0x24e6c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24E6CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)3840 << 16));
        if (branch_taken_0x24e6c8) {
            ctx->pc = 0x24E6ECu;
            goto label_24e6ec;
        }
    }
    ctx->pc = 0x24E6D0u;
    // 0x24e6d0: 0x2221024
    ctx->pc = 0x24e6d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24e6d4: 0x14400006
    ctx->pc = 0x24E6D4u;
    {
        const bool branch_taken_0x24e6d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24E6D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x24e6d4) {
            ctx->pc = 0x24E6F0u;
            goto label_24e6f0;
        }
    }
    ctx->pc = 0x24E6DCu;
    // 0x24e6dc: 0x240500e0
    ctx->pc = 0x24e6dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x24e6e0: 0x26460050
    ctx->pc = 0x24e6e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 80));
    // 0x24e6e4: 0xc098518
    ctx->pc = 0x24E6E4u;
    SET_GPR_U32(ctx, 31, 0x24E6ECu);
    ctx->pc = 0x24E6E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x261460u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlaySound_0x261460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E6ECu; }
    }
    if (ctx->pc != 0x24E6ECu) { return; }
    ctx->pc = 0x24E6ECu;
label_24e6ec:
    // 0x24e6ec: 0x32220002
    ctx->pc = 0x24e6ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 2));
label_24e6f0:
    // 0x24e6f0: 0x10400008
    ctx->pc = 0x24E6F0u;
    {
        const bool branch_taken_0x24e6f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E6F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e6f0) {
            ctx->pc = 0x24E714u;
            goto label_24e714;
        }
    }
    ctx->pc = 0x24E6F8u;
    // 0x24e6f8: 0x282d
    ctx->pc = 0x24e6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6fc: 0x2406005a
    ctx->pc = 0x24e6fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 90));
    // 0x24e700: 0x3c013dcc
    ctx->pc = 0x24e700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x24e704: 0x3421cccd
    ctx->pc = 0x24e704u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x24e708: 0x44816000
    ctx->pc = 0x24e708u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24e70c: 0xc09bed8
    ctx->pc = 0x24E70Cu;
    SET_GPR_U32(ctx, 31, 0x24E714u);
    ctx->pc = 0x24E710u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x26FB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShakeCamera_0x26fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E714u; }
    }
    if (ctx->pc != 0x24E714u) { return; }
    ctx->pc = 0x24E714u;
label_24e714:
    // 0x24e714: 0x32220020
    ctx->pc = 0x24e714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 32));
    // 0x24e718: 0x50400004
    ctx->pc = 0x24E718u;
    {
        const bool branch_taken_0x24e718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24e718) {
            ctx->pc = 0x24E71Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x24E72Cu;
            goto label_24e72c;
        }
    }
    ctx->pc = 0x24E720u;
    // 0x24e720: 0xc094d7e
    ctx->pc = 0x24E720u;
    SET_GPR_U32(ctx, 31, 0x24E728u);
    ctx->pc = 0x2535F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoWorldEffects_0x2535f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E728u; }
    }
    if (ctx->pc != 0x24E728u) { return; }
    ctx->pc = 0x24E728u;
    // 0x24e728: 0x8e050004
    ctx->pc = 0x24e728u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24e72c:
    // 0x24e72c: 0x4a00005
    ctx->pc = 0x24E72Cu;
    {
        const bool branch_taken_0x24e72c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x24E730u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e72c) {
            ctx->pc = 0x24E744u;
            goto label_24e744;
        }
    }
    ctx->pc = 0x24E734u;
    // 0x24e734: 0x260302d
    ctx->pc = 0x24e734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e738: 0x280382d
    ctx->pc = 0x24e738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e73c: 0xc093946
    ctx->pc = 0x24E73Cu;
    SET_GPR_U32(ctx, 31, 0x24E744u);
    ctx->pc = 0x24E740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24E518u;
    goto label_24e518;
    ctx->pc = 0x24E744u;
label_24e744:
    // 0x24e744: 0x2a0102d
    ctx->pc = 0x24e744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24e748:
    // 0x24e748: 0xdfbf00d0
    ctx->pc = 0x24e748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24e74c: 0xdfb600c0
    ctx->pc = 0x24e74cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24e750: 0xdfb500b0
    ctx->pc = 0x24e750u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e754: 0xdfb400a0
    ctx->pc = 0x24e754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e758: 0xdfb30090
    ctx->pc = 0x24e758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24e75c: 0xdfb20080
    ctx->pc = 0x24e75cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e760: 0xdfb10070
    ctx->pc = 0x24e760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e764: 0xdfb00060
    ctx->pc = 0x24e764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e768: 0x3e00008
    ctx->pc = 0x24E768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E76Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E518u: goto label_24e518;
            case 0x24E560u: goto label_24e560;
            case 0x24E5B4u: goto label_24e5b4;
            case 0x24E5D0u: goto label_24e5d0;
            case 0x24E5F0u: goto label_24e5f0;
            case 0x24E61Cu: goto label_24e61c;
            case 0x24E634u: goto label_24e634;
            case 0x24E658u: goto label_24e658;
            case 0x24E68Cu: goto label_24e68c;
            case 0x24E6A0u: goto label_24e6a0;
            case 0x24E6A4u: goto label_24e6a4;
            case 0x24E6C8u: goto label_24e6c8;
            case 0x24E6ECu: goto label_24e6ec;
            case 0x24E6F0u: goto label_24e6f0;
            case 0x24E714u: goto label_24e714;
            case 0x24E72Cu: goto label_24e72c;
            case 0x24E744u: goto label_24e744;
            case 0x24E748u: goto label_24e748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24E770u;
}
