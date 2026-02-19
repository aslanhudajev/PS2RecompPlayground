#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyCollideFloor
// Address: 0x243198 - 0x2435dc
void EnemyCollideFloor_0x243198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x243198u;

    // 0x243198: 0x27bdff40
    ctx->pc = 0x243198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x24319c: 0xffbf0090
    ctx->pc = 0x24319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2431a0: 0xffb40080
    ctx->pc = 0x2431a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2431a4: 0xffb30070
    ctx->pc = 0x2431a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2431a8: 0xffb20060
    ctx->pc = 0x2431a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2431ac: 0xffb10050
    ctx->pc = 0x2431acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2431b0: 0xffb00040
    ctx->pc = 0x2431b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2431b4: 0xe7b700b8
    ctx->pc = 0x2431b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2431b8: 0xe7b600b0
    ctx->pc = 0x2431b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2431bc: 0xe7b500a8
    ctx->pc = 0x2431bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2431c0: 0xe7b400a0
    ctx->pc = 0x2431c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2431c4: 0x80802d
    ctx->pc = 0x2431c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431c8: 0xa0902d
    ctx->pc = 0x2431c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431cc: 0xc0882d
    ctx->pc = 0x2431ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431d0: 0x460065c6
    ctx->pc = 0x2431d0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2431d4: 0xe0a02d
    ctx->pc = 0x2431d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431d8: 0x46006d86
    ctx->pc = 0x2431d8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2431dc: 0x4617b000
    ctx->pc = 0x2431dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x2431e0: 0x3c013dcc
    ctx->pc = 0x2431e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2431e4: 0x3421cccd
    ctx->pc = 0x2431e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2431e8: 0x44810800
    ctx->pc = 0x2431e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2431ec: 0x46010000
    ctx->pc = 0x2431ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2431f0: 0x8e030000
    ctx->pc = 0x2431f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2431f4: 0x2402001d
    ctx->pc = 0x2431f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x2431f8: 0x10620008
    ctx->pc = 0x2431F8u;
    {
        const bool branch_taken_0x2431f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2431FCu;
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        if (branch_taken_0x2431f8) {
            ctx->pc = 0x24321Cu;
            goto label_24321c;
        }
    }
    ctx->pc = 0x243200u;
    // 0x243200: 0xc6010250
    ctx->pc = 0x243200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243204: 0x3c014000
    ctx->pc = 0x243204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x243208: 0x44810000
    ctx->pc = 0x243208u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24320c: 0x46000836
    ctx->pc = 0x24320cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243210: 0x0
    ctx->pc = 0x243210u;
    // NOP
    // 0x243214: 0x45020029
    ctx->pc = 0x243214u;
    {
        const bool branch_taken_0x243214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243214) {
            ctx->pc = 0x243218u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2432BCu;
            goto label_2432bc;
        }
    }
    ctx->pc = 0x24321Cu;
label_24321c:
    // 0x24321c: 0xc6030300
    ctx->pc = 0x24321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243220: 0xc6400000
    ctx->pc = 0x243220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243224: 0x460018c1
    ctx->pc = 0x243224u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x243228: 0xe7a30020
    ctx->pc = 0x243228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24322c: 0xc6050304
    ctx->pc = 0x24322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x243230: 0xc6400004
    ctx->pc = 0x243230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243234: 0x46002941
    ctx->pc = 0x243234u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x243238: 0xe7a50024
    ctx->pc = 0x243238u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24323c: 0xc6040308
    ctx->pc = 0x24323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x243240: 0xc6400008
    ctx->pc = 0x243240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243244: 0x46002101
    ctx->pc = 0x243244u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x243248: 0xe7a40028
    ctx->pc = 0x243248u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24324c: 0xc6220000
    ctx->pc = 0x24324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243250: 0x46021880
    ctx->pc = 0x243250u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x243254: 0xe7a20030
    ctx->pc = 0x243254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x243258: 0xc6210004
    ctx->pc = 0x243258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24325c: 0x46012840
    ctx->pc = 0x24325cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x243260: 0xe7a10034
    ctx->pc = 0x243260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x243264: 0xc6200008
    ctx->pc = 0x243264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243268: 0x46002000
    ctx->pc = 0x243268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x24326c: 0xe7a00038
    ctx->pc = 0x24326cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x243270: 0x46021082
    ctx->pc = 0x243270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x243274: 0x46010842
    ctx->pc = 0x243274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x243278: 0x46011080
    ctx->pc = 0x243278u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24327c: 0x46000002
    ctx->pc = 0x24327cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x243280: 0x46001080
    ctx->pc = 0x243280u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x243284: 0x460318c2
    ctx->pc = 0x243284u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x243288: 0x46052942
    ctx->pc = 0x243288u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x24328c: 0x460518c0
    ctx->pc = 0x24328cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x243290: 0x46042102
    ctx->pc = 0x243290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x243294: 0x460418c0
    ctx->pc = 0x243294u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x243298: 0x46021834
    ctx->pc = 0x243298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24329c: 0x0
    ctx->pc = 0x24329cu;
    // NOP
    // 0x2432a0: 0x45020006
    ctx->pc = 0x2432A0u;
    {
        const bool branch_taken_0x2432a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2432a0) {
            ctx->pc = 0x2432A4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2432BCu;
            goto label_2432bc;
        }
    }
    ctx->pc = 0x2432A8u;
    // 0x2432a8: 0x4617b540
    ctx->pc = 0x2432a8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x2432ac: 0x3c013f00
    ctx->pc = 0x2432acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2432b0: 0x44810000
    ctx->pc = 0x2432b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2432b4: 0x4600ad42
    ctx->pc = 0x2432b4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2432b8: 0xc6200000
    ctx->pc = 0x2432b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2432bc:
    // 0x2432bc: 0xe7a00010
    ctx->pc = 0x2432bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2432c0: 0xc6200004
    ctx->pc = 0x2432c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2432c4: 0xe7a00014
    ctx->pc = 0x2432c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2432c8: 0xc6200008
    ctx->pc = 0x2432c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2432cc: 0xe7a00018
    ctx->pc = 0x2432ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2432d0: 0xc0b58a4
    ctx->pc = 0x2432D0u;
    SET_GPR_U32(ctx, 31, 0x2432D8u);
    ctx->pc = 0x2432D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432D8u; }
    }
    if (ctx->pc != 0x2432D8u) { return; }
    ctx->pc = 0x2432D8u;
    // 0x2432d8: 0x4600b800
    ctx->pc = 0x2432d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x2432dc: 0xc7a20010
    ctx->pc = 0x2432dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2432e0: 0x46020082
    ctx->pc = 0x2432e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2432e4: 0xe7a20010
    ctx->pc = 0x2432e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2432e8: 0xc7a30014
    ctx->pc = 0x2432e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2432ec: 0x460300c2
    ctx->pc = 0x2432ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2432f0: 0xe7a30014
    ctx->pc = 0x2432f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2432f4: 0xc7a10018
    ctx->pc = 0x2432f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2432f8: 0x46010002
    ctx->pc = 0x2432f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2432fc: 0xe7a00018
    ctx->pc = 0x2432fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x243300: 0xc6410000
    ctx->pc = 0x243300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243304: 0x46020840
    ctx->pc = 0x243304u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x243308: 0xe7a10000
    ctx->pc = 0x243308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24330c: 0xc6410004
    ctx->pc = 0x24330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243310: 0x46030840
    ctx->pc = 0x243310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x243314: 0xe7a10004
    ctx->pc = 0x243314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x243318: 0xc6410008
    ctx->pc = 0x243318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24331c: 0x46000840
    ctx->pc = 0x24331cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x243320: 0xe7a10008
    ctx->pc = 0x243320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x243324: 0x3c013f00
    ctx->pc = 0x243324u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x243328: 0x44816000
    ctx->pc = 0x243328u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24332c: 0xc60d0250
    ctx->pc = 0x24332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x243330: 0x46006807
    ctx->pc = 0x243330u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x243334: 0x3c0140a0
    ctx->pc = 0x243334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x243338: 0x44817000
    ctx->pc = 0x243338u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x24333c: 0x3a0202d
    ctx->pc = 0x24333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243340: 0x3c050033
    ctx->pc = 0x243340u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x243344: 0x24a54700
    ctx->pc = 0x243344u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18176));
    // 0x243348: 0x460cbb02
    ctx->pc = 0x243348u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
    // 0x24334c: 0x460e0381
    ctx->pc = 0x24334cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x243350: 0x302d
    ctx->pc = 0x243350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243354: 0xc087b24
    ctx->pc = 0x243354u;
    SET_GPR_U32(ctx, 31, 0x24335Cu);
    ctx->pc = 0x243358u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24335Cu; }
    }
    if (ctx->pc != 0x24335Cu) { return; }
    ctx->pc = 0x24335Cu;
    // 0x24335c: 0x40982d
    ctx->pc = 0x24335cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243360: 0x12600008
    ctx->pc = 0x243360u;
    {
        const bool branch_taken_0x243360 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x243364u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243360) {
            ctx->pc = 0x243384u;
            goto label_243384;
        }
    }
    ctx->pc = 0x243368u;
    // 0x243368: 0x260282d
    ctx->pc = 0x243368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24336c: 0x240302d
    ctx->pc = 0x24336cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243370: 0x3c070033
    ctx->pc = 0x243370u;
    SET_GPR_U32(ctx, 7, ((uint32_t)51 << 16));
    // 0x243374: 0xc090bc2
    ctx->pc = 0x243374u;
    SET_GPR_U32(ctx, 31, 0x24337Cu);
    ctx->pc = 0x243378u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18224));
    ctx->pc = 0x242F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyWorldDamage_0x242f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24337Cu; }
    }
    if (ctx->pc != 0x24337Cu) { return; }
    ctx->pc = 0x24337Cu;
    // 0x24337c: 0x10000013
    ctx->pc = 0x24337Cu;
    {
        const bool branch_taken_0x24337c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243380u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24337c) {
            ctx->pc = 0x2433CCu;
            goto label_2433cc;
        }
    }
    ctx->pc = 0x243384u;
label_243384:
    // 0x243384: 0xc6010280
    ctx->pc = 0x243384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243388: 0x3c013c23
    ctx->pc = 0x243388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x24338c: 0x3421d70a
    ctx->pc = 0x24338cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x243390: 0x44810000
    ctx->pc = 0x243390u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x243394: 0x46000834
    ctx->pc = 0x243394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243398: 0x0
    ctx->pc = 0x243398u;
    // NOP
    // 0x24339c: 0x45000005
    ctx->pc = 0x24339Cu;
    {
        const bool branch_taken_0x24339c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2433A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24339c) {
            ctx->pc = 0x2433B4u;
            goto label_2433b4;
        }
    }
    ctx->pc = 0x2433A4u;
    // 0x2433a4: 0x44800000
    ctx->pc = 0x2433a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2433a8: 0xe6200008
    ctx->pc = 0x2433a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2433ac: 0x1000004e
    ctx->pc = 0x2433ACu;
    {
        const bool branch_taken_0x2433ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2433B0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x2433ac) {
            ctx->pc = 0x2434E8u;
            goto label_2434e8;
        }
    }
    ctx->pc = 0x2433B4u;
label_2433b4:
    // 0x2433b4: 0xc440e88c
    ctx->pc = 0x2433b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2433b8: 0x3c01447a
    ctx->pc = 0x2433b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x2433bc: 0x44810800
    ctx->pc = 0x2433bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2433c0: 0x46010001
    ctx->pc = 0x2433c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2433c4: 0x10000048
    ctx->pc = 0x2433C4u;
    {
        const bool branch_taken_0x2433c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2433C8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        if (branch_taken_0x2433c4) {
            ctx->pc = 0x2434E8u;
            goto label_2434e8;
        }
    }
    ctx->pc = 0x2433CCu;
label_2433cc:
    // 0x2433cc: 0xc4544734
    ctx->pc = 0x2433ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2433d0: 0xc60002a8
    ctx->pc = 0x2433d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2433d4: 0xc6010230
    ctx->pc = 0x2433d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2433d8: 0x46010001
    ctx->pc = 0x2433d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2433dc: 0x4600a041
    ctx->pc = 0x2433dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2433e0: 0x44800000
    ctx->pc = 0x2433e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2433e4: 0x46000834
    ctx->pc = 0x2433e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2433e8: 0x0
    ctx->pc = 0x2433e8u;
    // NOP
    // 0x2433ec: 0x45030001
    ctx->pc = 0x2433ECu;
    {
        const bool branch_taken_0x2433ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2433ec) {
            ctx->pc = 0x2433F0u;
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->pc = 0x2433F4u;
            goto label_2433f4;
        }
    }
    ctx->pc = 0x2433F4u;
label_2433f4:
    // 0x2433f4: 0x4601a834
    ctx->pc = 0x2433f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2433f8: 0x45000010
    ctx->pc = 0x2433F8u;
    {
        const bool branch_taken_0x2433f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2433f8) {
            ctx->pc = 0x24343Cu;
            goto label_24343c;
        }
    }
    ctx->pc = 0x243400u;
    // 0x243400: 0xc6010280
    ctx->pc = 0x243400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243404: 0x3c013c23
    ctx->pc = 0x243404u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x243408: 0x3421d70a
    ctx->pc = 0x243408u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x24340c: 0x44810000
    ctx->pc = 0x24340cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x243410: 0x46000834
    ctx->pc = 0x243410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243414: 0x0
    ctx->pc = 0x243414u;
    // NOP
    // 0x243418: 0x45020005
    ctx->pc = 0x243418u;
    {
        const bool branch_taken_0x243418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243418) {
            ctx->pc = 0x24341Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x243430u;
            goto label_243430;
        }
    }
    ctx->pc = 0x243420u;
    // 0x243420: 0x44800000
    ctx->pc = 0x243420u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x243424: 0xe6200008
    ctx->pc = 0x243424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x243428: 0x1000002f
    ctx->pc = 0x243428u;
    {
        const bool branch_taken_0x243428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24342Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x243428) {
            ctx->pc = 0x2434E8u;
            goto label_2434e8;
        }
    }
    ctx->pc = 0x243430u;
label_243430:
    // 0x243430: 0x4600a000
    ctx->pc = 0x243430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x243434: 0x1000002c
    ctx->pc = 0x243434u;
    {
        const bool branch_taken_0x243434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243438u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        if (branch_taken_0x243434) {
            ctx->pc = 0x2434E8u;
            goto label_2434e8;
        }
    }
    ctx->pc = 0x24343Cu;
label_24343c:
    // 0x24343c: 0x4480a800
    ctx->pc = 0x24343cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x243440: 0x4616a834
    ctx->pc = 0x243440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243444: 0x0
    ctx->pc = 0x243444u;
    // NOP
    // 0x243448: 0x4500002b
    ctx->pc = 0x243448u;
    {
        const bool branch_taken_0x243448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24344Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
        if (branch_taken_0x243448) {
            ctx->pc = 0x2434F8u;
            goto label_2434f8;
        }
    }
    ctx->pc = 0x243450u;
    // 0x243450: 0x3c013dcc
    ctx->pc = 0x243450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x243454: 0x3421cccd
    ctx->pc = 0x243454u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x243458: 0x44810000
    ctx->pc = 0x243458u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24345c: 0x4600b002
    ctx->pc = 0x24345cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x243460: 0x46010034
    ctx->pc = 0x243460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243464: 0x0
    ctx->pc = 0x243464u;
    // NOP
    // 0x243468: 0x45000023
    ctx->pc = 0x243468u;
    {
        const bool branch_taken_0x243468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24346Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243468) {
            ctx->pc = 0x2434F8u;
            goto label_2434f8;
        }
    }
    ctx->pc = 0x243470u;
    // 0x243470: 0xc6400000
    ctx->pc = 0x243470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243474: 0xc6210000
    ctx->pc = 0x243474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243478: 0x46010000
    ctx->pc = 0x243478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24347c: 0xe7a00000
    ctx->pc = 0x24347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x243480: 0xc6400004
    ctx->pc = 0x243480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243484: 0xc6210004
    ctx->pc = 0x243484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243488: 0x46010000
    ctx->pc = 0x243488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24348c: 0xe7a00004
    ctx->pc = 0x24348cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x243490: 0xc6400008
    ctx->pc = 0x243490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243494: 0xc6210008
    ctx->pc = 0x243494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243498: 0x46010000
    ctx->pc = 0x243498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24349c: 0xe7a00008
    ctx->pc = 0x24349cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2434a0: 0x3c013f00
    ctx->pc = 0x2434a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2434a4: 0x44816000
    ctx->pc = 0x2434a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2434a8: 0xc60d0250
    ctx->pc = 0x2434a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2434ac: 0x46006807
    ctx->pc = 0x2434acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x2434b0: 0x3c0140a0
    ctx->pc = 0x2434b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2434b4: 0x44817000
    ctx->pc = 0x2434b4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2434b8: 0x3c050033
    ctx->pc = 0x2434b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x2434bc: 0x24a54700
    ctx->pc = 0x2434bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18176));
    // 0x2434c0: 0x460cbb02
    ctx->pc = 0x2434c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
    // 0x2434c4: 0x460e0381
    ctx->pc = 0x2434c4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x2434c8: 0x302d
    ctx->pc = 0x2434c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434cc: 0xc087b24
    ctx->pc = 0x2434CCu;
    SET_GPR_U32(ctx, 31, 0x2434D4u);
    ctx->pc = 0x2434D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2434D4u; }
    }
    if (ctx->pc != 0x2434D4u) { return; }
    ctx->pc = 0x2434D4u;
    // 0x2434d4: 0x40982d
    ctx->pc = 0x2434d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434d8: 0x16600005
    ctx->pc = 0x2434D8u;
    {
        const bool branch_taken_0x2434d8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2434DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2434d8) {
            ctx->pc = 0x2434F0u;
            goto label_2434f0;
        }
    }
    ctx->pc = 0x2434E0u;
    // 0x2434e0: 0xe6350008
    ctx->pc = 0x2434e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2434e4: 0xe6350000
    ctx->pc = 0x2434e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2434e8:
    // 0x2434e8: 0x10000030
    ctx->pc = 0x2434E8u;
    {
        const bool branch_taken_0x2434e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2434ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2434e8) {
            ctx->pc = 0x2435ACu;
            goto label_2435ac;
        }
    }
    ctx->pc = 0x2434F0u;
label_2434f0:
    // 0x2434f0: 0xc4544734
    ctx->pc = 0x2434f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2434f4: 0x2682ffff
    ctx->pc = 0x2434f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
label_2434f8:
    // 0x2434f8: 0x2c420002
    ctx->pc = 0x2434f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2434fc: 0x14400008
    ctx->pc = 0x2434FCu;
    {
        const bool branch_taken_0x2434fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x243500u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2434fc) {
            ctx->pc = 0x243520u;
            goto label_243520;
        }
    }
    ctx->pc = 0x243504u;
    // 0x243504: 0x24020003
    ctx->pc = 0x243504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x243508: 0x5682001f
    ctx->pc = 0x243508u;
    {
        const bool branch_taken_0x243508 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x243508) {
            ctx->pc = 0x24350Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x243588u;
            goto label_243588;
        }
    }
    ctx->pc = 0x243510u;
    // 0x243510: 0x3c02003c
    ctx->pc = 0x243510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x243514: 0x8c421e74
    ctx->pc = 0x243514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7796)));
    // 0x243518: 0x1053001a
    ctx->pc = 0x243518u;
    {
        const bool branch_taken_0x243518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x24351Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x243518) {
            ctx->pc = 0x243584u;
            goto label_243584;
        }
    }
    ctx->pc = 0x243520u;
label_243520:
    // 0x243520: 0x12820003
    ctx->pc = 0x243520u;
    {
        const bool branch_taken_0x243520 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x243524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x243520) {
            ctx->pc = 0x243530u;
            goto label_243530;
        }
    }
    ctx->pc = 0x243528u;
    // 0x243528: 0x16820012
    ctx->pc = 0x243528u;
    {
        const bool branch_taken_0x243528 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x243528) {
            ctx->pc = 0x243574u;
            goto label_243574;
        }
    }
    ctx->pc = 0x243530u;
label_243530:
    // 0x243530: 0x8e020344
    ctx->pc = 0x243530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x243534: 0x30420001
    ctx->pc = 0x243534u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x243538: 0x1440000e
    ctx->pc = 0x243538u;
    {
        const bool branch_taken_0x243538 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24353Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243538) {
            ctx->pc = 0x243574u;
            goto label_243574;
        }
    }
    ctx->pc = 0x243540u;
    // 0x243540: 0x220282d
    ctx->pc = 0x243540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243544: 0x3c06003c
    ctx->pc = 0x243544u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x243548: 0x24c61e78
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7800));
    // 0x24354c: 0x3c070032
    ctx->pc = 0x24354cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x243550: 0x24e7fc10
    ctx->pc = 0x243550u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966288));
    // 0x243554: 0xc087c18
    ctx->pc = 0x243554u;
    SET_GPR_U32(ctx, 31, 0x24355Cu);
    ctx->pc = 0x243558u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x21F060u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlideAlongWall_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24355Cu; }
    }
    if (ctx->pc != 0x24355Cu) { return; }
    ctx->pc = 0x24355Cu;
    // 0x24355c: 0x4400005
    ctx->pc = 0x24355Cu;
    {
        const bool branch_taken_0x24355c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24355c) {
            ctx->pc = 0x243574u;
            goto label_243574;
        }
    }
    ctx->pc = 0x243564u;
    // 0x243564: 0xc6000230
    ctx->pc = 0x243564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243568: 0x4600a000
    ctx->pc = 0x243568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24356c: 0x10000005
    ctx->pc = 0x24356Cu;
    {
        const bool branch_taken_0x24356c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243570u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        if (branch_taken_0x24356c) {
            ctx->pc = 0x243584u;
            goto label_243584;
        }
    }
    ctx->pc = 0x243574u;
label_243574:
    // 0x243574: 0x44800000
    ctx->pc = 0x243574u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x243578: 0xe6200008
    ctx->pc = 0x243578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x24357c: 0x1000ffda
    ctx->pc = 0x24357Cu;
    {
        const bool branch_taken_0x24357c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243580u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x24357c) {
            ctx->pc = 0x2434E8u;
            goto label_2434e8;
        }
    }
    ctx->pc = 0x243584u;
label_243584:
    // 0x243584: 0xc6000230
    ctx->pc = 0x243584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243588:
    // 0x243588: 0x4600a000
    ctx->pc = 0x243588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24358c: 0xe60002a8
    ctx->pc = 0x24358cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x243590: 0x8e0501f0
    ctx->pc = 0x243590u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x243594: 0x10a00005
    ctx->pc = 0x243594u;
    {
        const bool branch_taken_0x243594 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x243598u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243594) {
            ctx->pc = 0x2435ACu;
            goto label_2435ac;
        }
    }
    ctx->pc = 0x24359Cu;
    // 0x24359c: 0x3c040033
    ctx->pc = 0x24359cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x2435a0: 0xc0b549e
    ctx->pc = 0x2435A0u;
    SET_GPR_U32(ctx, 31, 0x2435A8u);
    ctx->pc = 0x2435A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18176));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435A8u; }
    }
    if (ctx->pc != 0x2435A8u) { return; }
    ctx->pc = 0x2435A8u;
    // 0x2435a8: 0x260102d
    ctx->pc = 0x2435a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2435ac:
    // 0x2435ac: 0xdfbf0090
    ctx->pc = 0x2435acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2435b0: 0xdfb40080
    ctx->pc = 0x2435b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2435b4: 0xdfb30070
    ctx->pc = 0x2435b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2435b8: 0xdfb20060
    ctx->pc = 0x2435b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2435bc: 0xdfb10050
    ctx->pc = 0x2435bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2435c0: 0xdfb00040
    ctx->pc = 0x2435c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2435c4: 0xc7b700b8
    ctx->pc = 0x2435c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2435c8: 0xc7b600b0
    ctx->pc = 0x2435c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2435cc: 0xc7b500a8
    ctx->pc = 0x2435ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2435d0: 0xc7b400a0
    ctx->pc = 0x2435d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2435d4: 0x3e00008
    ctx->pc = 0x2435D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2435D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24321Cu: goto label_24321c;
            case 0x2432BCu: goto label_2432bc;
            case 0x243384u: goto label_243384;
            case 0x2433B4u: goto label_2433b4;
            case 0x2433CCu: goto label_2433cc;
            case 0x2433F4u: goto label_2433f4;
            case 0x243430u: goto label_243430;
            case 0x24343Cu: goto label_24343c;
            case 0x2434E8u: goto label_2434e8;
            case 0x2434F0u: goto label_2434f0;
            case 0x2434F8u: goto label_2434f8;
            case 0x243520u: goto label_243520;
            case 0x243530u: goto label_243530;
            case 0x243574u: goto label_243574;
            case 0x243584u: goto label_243584;
            case 0x243588u: goto label_243588;
            case 0x2435ACu: goto label_2435ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2435DCu;
}
