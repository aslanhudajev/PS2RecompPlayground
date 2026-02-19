#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcCamera
// Address: 0x267120 - 0x2672a0
void ProcCamera_0x267120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x267120u;

    // 0x267120: 0x27bdff70
    ctx->pc = 0x267120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x267124: 0xffbf0080
    ctx->pc = 0x267124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x267128: 0xffb40070
    ctx->pc = 0x267128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x26712c: 0xffb30060
    ctx->pc = 0x26712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x267130: 0xffb20050
    ctx->pc = 0x267130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x267134: 0xffb10040
    ctx->pc = 0x267134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x267138: 0xffb00030
    ctx->pc = 0x267138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26713c: 0x80982d
    ctx->pc = 0x26713cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267140: 0x240301a0
    ctx->pc = 0x267140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x267144: 0x2631818
    ctx->pc = 0x267144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x267148: 0x3c020034
    ctx->pc = 0x267148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26714c: 0x2442eb60
    ctx->pc = 0x26714cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x267150: 0x629021
    ctx->pc = 0x267150u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267154: 0x8e420000
    ctx->pc = 0x267154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267158: 0x10400049
    ctx->pc = 0x267158u;
    {
        const bool branch_taken_0x267158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26715Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x267158) {
            ctx->pc = 0x267280u;
            goto label_267280;
        }
    }
    ctx->pc = 0x267160u;
    // 0x267160: 0x8e420104
    ctx->pc = 0x267160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x267164: 0x1440000a
    ctx->pc = 0x267164u;
    {
        const bool branch_taken_0x267164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x267168u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x267164) {
            ctx->pc = 0x267190u;
            goto label_267190;
        }
    }
    ctx->pc = 0x26716Cu;
    // 0x26716c: 0x8e4200f8
    ctx->pc = 0x26716cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x267170: 0x2442fffc
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x267174: 0x2c420002
    ctx->pc = 0x267174u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x267178: 0x14400005
    ctx->pc = 0x267178u;
    {
        const bool branch_taken_0x267178 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26717Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x267178) {
            ctx->pc = 0x267190u;
            goto label_267190;
        }
    }
    ctx->pc = 0x267180u;
    // 0x267180: 0x26440010
    ctx->pc = 0x267180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
    // 0x267184: 0xc0b5ae8
    ctx->pc = 0x267184u;
    SET_GPR_U32(ctx, 31, 0x26718Cu);
    ctx->pc = 0x267188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26718Cu; }
    }
    if (ctx->pc != 0x26718Cu) { return; }
    ctx->pc = 0x26718Cu;
    // 0x26718c: 0x3c020031
    ctx->pc = 0x26718cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_267190:
    // 0x267190: 0x3c030031
    ctx->pc = 0x267190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x267194: 0x8c42ff9c
    ctx->pc = 0x267194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x267198: 0x8c630024
    ctx->pc = 0x267198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x26719c: 0x431025
    ctx->pc = 0x26719cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2671a0: 0x14400022
    ctx->pc = 0x2671A0u;
    {
        const bool branch_taken_0x2671a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2671A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x2671a0) {
            ctx->pc = 0x26722Cu;
            goto label_26722c;
        }
    }
    ctx->pc = 0x2671A8u;
    // 0x2671a8: 0x26510010
    ctx->pc = 0x2671a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 16));
    // 0x2671ac: 0x26440090
    ctx->pc = 0x2671acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 144));
    // 0x2671b0: 0x200282d
    ctx->pc = 0x2671b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671b4: 0xc0b57a2
    ctx->pc = 0x2671B4u;
    SET_GPR_U32(ctx, 31, 0x2671BCu);
    ctx->pc = 0x2671B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671BCu; }
    }
    if (ctx->pc != 0x2671BCu) { return; }
    ctx->pc = 0x2671BCu;
    // 0x2671bc: 0xc6400070
    ctx->pc = 0x2671bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671c0: 0xc7a10010
    ctx->pc = 0x2671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2671c4: 0x46010000
    ctx->pc = 0x2671c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2671c8: 0xe6400070
    ctx->pc = 0x2671c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2671cc: 0xc6400074
    ctx->pc = 0x2671ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671d0: 0xc7a10014
    ctx->pc = 0x2671d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2671d4: 0x46010000
    ctx->pc = 0x2671d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2671d8: 0xe6400074
    ctx->pc = 0x2671d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x2671dc: 0xc6400078
    ctx->pc = 0x2671dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671e0: 0xc7a10018
    ctx->pc = 0x2671e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2671e4: 0x46010000
    ctx->pc = 0x2671e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2671e8: 0xe6400078
    ctx->pc = 0x2671e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x2671ec: 0x264400a0
    ctx->pc = 0x2671ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 160));
    // 0x2671f0: 0x200282d
    ctx->pc = 0x2671f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671f4: 0xc0b57a2
    ctx->pc = 0x2671F4u;
    SET_GPR_U32(ctx, 31, 0x2671FCu);
    ctx->pc = 0x2671F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2671FCu; }
    }
    if (ctx->pc != 0x2671FCu) { return; }
    ctx->pc = 0x2671FCu;
    // 0x2671fc: 0xc6400140
    ctx->pc = 0x2671fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267200: 0xc7a10010
    ctx->pc = 0x267200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267204: 0x46010000
    ctx->pc = 0x267204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267208: 0xe6400140
    ctx->pc = 0x267208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x26720c: 0xc6400144
    ctx->pc = 0x26720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267210: 0xc7a10014
    ctx->pc = 0x267210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267214: 0x46010000
    ctx->pc = 0x267214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267218: 0xe6400144
    ctx->pc = 0x267218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x26721c: 0xc6400148
    ctx->pc = 0x26721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267220: 0xc7a10018
    ctx->pc = 0x267220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267224: 0x46010000
    ctx->pc = 0x267224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267228: 0xe6400148
    ctx->pc = 0x267228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
label_26722c:
    // 0x26722c: 0x52800008
    ctx->pc = 0x26722Cu;
    {
        const bool branch_taken_0x26722c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x26722c) {
            ctx->pc = 0x267230u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x267234u;
    // 0x267234: 0x56600006
    ctx->pc = 0x267234u;
    {
        const bool branch_taken_0x267234 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x267234) {
            ctx->pc = 0x267238u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x267250u;
            goto label_267250;
        }
    }
    ctx->pc = 0x26723Cu;
    // 0x26723c: 0x8e4300f8
    ctx->pc = 0x26723cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x267240: 0x24020003
    ctx->pc = 0x267240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x267244: 0x10620007
    ctx->pc = 0x267244u;
    {
        const bool branch_taken_0x267244 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x267248u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x267244) {
            ctx->pc = 0x267264u;
            goto label_267264;
        }
    }
    ctx->pc = 0x26724Cu;
    // 0x26724c: 0xc6400070
    ctx->pc = 0x26724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_267250:
    // 0x267250: 0xe6400040
    ctx->pc = 0x267250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x267254: 0xc6400074
    ctx->pc = 0x267254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267258: 0xe6400044
    ctx->pc = 0x267258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x26725c: 0x10000007
    ctx->pc = 0x26725Cu;
    {
        const bool branch_taken_0x26725c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x267260u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26725c) {
            ctx->pc = 0x26727Cu;
            goto label_26727c;
        }
    }
    ctx->pc = 0x267264u;
label_267264:
    // 0x267264: 0x2443fa08
    ctx->pc = 0x267264u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965768));
    // 0x267268: 0xc440fa08
    ctx->pc = 0x267268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26726c: 0xe6400040
    ctx->pc = 0x26726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x267270: 0xc4600004
    ctx->pc = 0x267270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267274: 0xe6400044
    ctx->pc = 0x267274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x267278: 0xc4600008
    ctx->pc = 0x267278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26727c:
    // 0x26727c: 0xe6400048
    ctx->pc = 0x26727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_267280:
    // 0x267280: 0xdfbf0080
    ctx->pc = 0x267280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267284: 0xdfb40070
    ctx->pc = 0x267284u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267288: 0xdfb30060
    ctx->pc = 0x267288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26728c: 0xdfb20050
    ctx->pc = 0x26728cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267290: 0xdfb10040
    ctx->pc = 0x267290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267294: 0xdfb00030
    ctx->pc = 0x267294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267298: 0x3e00008
    ctx->pc = 0x267298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26729Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x267190u: goto label_267190;
            case 0x26722Cu: goto label_26722c;
            case 0x267250u: goto label_267250;
            case 0x267264u: goto label_267264;
            case 0x26727Cu: goto label_26727c;
            case 0x267280u: goto label_267280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2672A0u;
}
