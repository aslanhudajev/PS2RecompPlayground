#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcFrustrumNormals
// Address: 0x215128 - 0x215384
void CalcFrustrumNormals_0x215128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215128u;

    // 0x215128: 0x27bdff50
    ctx->pc = 0x215128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21512c: 0xffbf0090
    ctx->pc = 0x21512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x215130: 0xffb20080
    ctx->pc = 0x215130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x215134: 0xffb10070
    ctx->pc = 0x215134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x215138: 0xffb00060
    ctx->pc = 0x215138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x21513c: 0xe7b500a8
    ctx->pc = 0x21513cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x215140: 0xe7b400a0
    ctx->pc = 0x215140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x215144: 0x80902d
    ctx->pc = 0x215144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215148: 0xc0882d
    ctx->pc = 0x215148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21514c: 0x3c04003a
    ctx->pc = 0x21514cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x215150: 0x24842510
    ctx->pc = 0x215150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9488));
    // 0x215154: 0x3a0282d
    ctx->pc = 0x215154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215158: 0xc0b57e6
    ctx->pc = 0x215158u;
    SET_GPR_U32(ctx, 31, 0x215160u);
    ctx->pc = 0x21515Cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215160u; }
    }
    if (ctx->pc != 0x215160u) { return; }
    ctx->pc = 0x215160u;
    // 0x215160: 0xc6440004
    ctx->pc = 0x215160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215164: 0xc7a30008
    ctx->pc = 0x215164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215168: 0x46032042
    ctx->pc = 0x215168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x21516c: 0xc6420008
    ctx->pc = 0x21516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215170: 0xc7a50004
    ctx->pc = 0x215170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x215174: 0x46051002
    ctx->pc = 0x215174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x215178: 0x46000841
    ctx->pc = 0x215178u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21517c: 0xe7a10010
    ctx->pc = 0x21517cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x215180: 0xc7a10000
    ctx->pc = 0x215180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215184: 0x46011082
    ctx->pc = 0x215184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x215188: 0xc6400000
    ctx->pc = 0x215188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21518c: 0x460300c2
    ctx->pc = 0x21518cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x215190: 0x46031081
    ctx->pc = 0x215190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x215194: 0xe7a20014
    ctx->pc = 0x215194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x215198: 0x46050002
    ctx->pc = 0x215198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x21519c: 0x46012102
    ctx->pc = 0x21519cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2151a0: 0x46040001
    ctx->pc = 0x2151a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2151a4: 0xe7a00018
    ctx->pc = 0x2151a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2151a8: 0x3c10003a
    ctx->pc = 0x2151a8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2151ac: 0x8e021bd0
    ctx->pc = 0x2151acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7120)));
    // 0x2151b0: 0xc44c001c
    ctx->pc = 0x2151b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2151b4: 0x3c013f00
    ctx->pc = 0x2151b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2151b8: 0x4481a800
    ctx->pc = 0x2151b8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2151bc: 0xc0b9e86
    ctx->pc = 0x2151BCu;
    SET_GPR_U32(ctx, 31, 0x2151C4u);
    ctx->pc = 0x2151C0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->pc = 0x2E7A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        tanf_0x2e7a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151C4u; }
    }
    if (ctx->pc != 0x2151C4u) { return; }
    ctx->pc = 0x2151C4u;
    // 0x2151c4: 0x46000506
    ctx->pc = 0x2151c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2151c8: 0x8e021bd0
    ctx->pc = 0x2151c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7120)));
    // 0x2151cc: 0xc44c0020
    ctx->pc = 0x2151ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2151d0: 0xc0b9e86
    ctx->pc = 0x2151D0u;
    SET_GPR_U32(ctx, 31, 0x2151D8u);
    ctx->pc = 0x2151D4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->pc = 0x2E7A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        tanf_0x2e7a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151D8u; }
    }
    if (ctx->pc != 0x2151D8u) { return; }
    ctx->pc = 0x2151D8u;
    // 0x2151d8: 0xc7a90000
    ctx->pc = 0x2151d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2151dc: 0x4609a242
    ctx->pc = 0x2151dcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x2151e0: 0xe7a90000
    ctx->pc = 0x2151e0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2151e4: 0xc7a70004
    ctx->pc = 0x2151e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2151e8: 0x4607a1c2
    ctx->pc = 0x2151e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x2151ec: 0xe7a70004
    ctx->pc = 0x2151ecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2151f0: 0xc7a10008
    ctx->pc = 0x2151f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2151f4: 0x4601a502
    ctx->pc = 0x2151f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2151f8: 0xe7b40008
    ctx->pc = 0x2151f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2151fc: 0xc7a40010
    ctx->pc = 0x2151fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215200: 0x46040102
    ctx->pc = 0x215200u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x215204: 0xe7a40010
    ctx->pc = 0x215204u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x215208: 0xc7a30014
    ctx->pc = 0x215208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21520c: 0x460300c2
    ctx->pc = 0x21520cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x215210: 0xe7a30014
    ctx->pc = 0x215210u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x215214: 0xc7a10018
    ctx->pc = 0x215214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215218: 0x46010002
    ctx->pc = 0x215218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21521c: 0xe7a00018
    ctx->pc = 0x21521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x215220: 0xc64d0000
    ctx->pc = 0x215220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x215224: 0x46096ac0
    ctx->pc = 0x215224u;
    ctx->f[11] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x215228: 0xc64c0004
    ctx->pc = 0x215228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21522c: 0x460763c0
    ctx->pc = 0x21522cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[12], ctx->f[7]);
    // 0x215230: 0xc6460008
    ctx->pc = 0x215230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x215234: 0x46143200
    ctx->pc = 0x215234u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[20]);
    // 0x215238: 0x46045940
    ctx->pc = 0x215238u;
    ctx->f[5] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x21523c: 0xe7a50020
    ctx->pc = 0x21523cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x215240: 0x46037a80
    ctx->pc = 0x215240u;
    ctx->f[10] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x215244: 0xe7aa0024
    ctx->pc = 0x215244u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x215248: 0x46004080
    ctx->pc = 0x215248u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x21524c: 0xe7a20028
    ctx->pc = 0x21524cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x215250: 0x46096b41
    ctx->pc = 0x215250u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[9]);
    // 0x215254: 0x46076301
    ctx->pc = 0x215254u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x215258: 0x46143181
    ctx->pc = 0x215258u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[20]);
    // 0x21525c: 0x46046b80
    ctx->pc = 0x21525cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[13], ctx->f[4]);
    // 0x215260: 0xe7ae0030
    ctx->pc = 0x215260u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x215264: 0x460361c0
    ctx->pc = 0x215264u;
    ctx->f[7] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x215268: 0xe7a70034
    ctx->pc = 0x215268u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21526c: 0x46003240
    ctx->pc = 0x21526cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x215270: 0xe7a90038
    ctx->pc = 0x215270u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x215274: 0x46045ac1
    ctx->pc = 0x215274u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[4]);
    // 0x215278: 0xe7ab0040
    ctx->pc = 0x215278u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21527c: 0x46037bc1
    ctx->pc = 0x21527cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x215280: 0xe7af0044
    ctx->pc = 0x215280u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x215284: 0x46004201
    ctx->pc = 0x215284u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x215288: 0xe7a80048
    ctx->pc = 0x215288u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21528c: 0x46046b41
    ctx->pc = 0x21528cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[4]);
    // 0x215290: 0xe7ad0050
    ctx->pc = 0x215290u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x215294: 0x46036301
    ctx->pc = 0x215294u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x215298: 0xe7ac0054
    ctx->pc = 0x215298u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x21529c: 0x46003181
    ctx->pc = 0x21529cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2152a0: 0xe7a60058
    ctx->pc = 0x2152a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2152a4: 0x46023802
    ctx->pc = 0x2152a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2152a8: 0x460a4842
    ctx->pc = 0x2152a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x2152ac: 0x46010001
    ctx->pc = 0x2152acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2152b0: 0xe6200000
    ctx->pc = 0x2152b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2152b4: 0x46054802
    ctx->pc = 0x2152b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x2152b8: 0x46027042
    ctx->pc = 0x2152b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2152bc: 0x46010001
    ctx->pc = 0x2152bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2152c0: 0xe6200004
    ctx->pc = 0x2152c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2152c4: 0x460a7002
    ctx->pc = 0x2152c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x2152c8: 0x46053842
    ctx->pc = 0x2152c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2152cc: 0x46010001
    ctx->pc = 0x2152ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2152d0: 0xe6200008
    ctx->pc = 0x2152d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2152d4: 0x46085002
    ctx->pc = 0x2152d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x2152d8: 0x460f1042
    ctx->pc = 0x2152d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2152dc: 0x46010001
    ctx->pc = 0x2152dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2152e0: 0xe6200010
    ctx->pc = 0x2152e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2152e4: 0x460b1082
    ctx->pc = 0x2152e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x2152e8: 0x46082802
    ctx->pc = 0x2152e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x2152ec: 0x46001081
    ctx->pc = 0x2152ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2152f0: 0xe6220014
    ctx->pc = 0x2152f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2152f4: 0x460f2942
    ctx->pc = 0x2152f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x2152f8: 0x460b5282
    ctx->pc = 0x2152f8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x2152fc: 0x460a2941
    ctx->pc = 0x2152fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
    // 0x215300: 0xe6250018
    ctx->pc = 0x215300u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x215304: 0x46096002
    ctx->pc = 0x215304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x215308: 0x46073042
    ctx->pc = 0x215308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x21530c: 0x46010001
    ctx->pc = 0x21530cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x215310: 0xe6200020
    ctx->pc = 0x215310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x215314: 0x460e3002
    ctx->pc = 0x215314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[14]);
    // 0x215318: 0x46096a42
    ctx->pc = 0x215318u;
    ctx->f[9] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x21531c: 0x46090001
    ctx->pc = 0x21531cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x215320: 0xe6200024
    ctx->pc = 0x215320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x215324: 0x460769c2
    ctx->pc = 0x215324u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x215328: 0x460e6382
    ctx->pc = 0x215328u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x21532c: 0x460e39c1
    ctx->pc = 0x21532cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[14]);
    // 0x215330: 0xe6270028
    ctx->pc = 0x215330u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x215334: 0x46067802
    ctx->pc = 0x215334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[6]);
    // 0x215338: 0x460c4042
    ctx->pc = 0x215338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x21533c: 0x46010001
    ctx->pc = 0x21533cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x215340: 0xe6200030
    ctx->pc = 0x215340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x215344: 0x460d4202
    ctx->pc = 0x215344u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x215348: 0x46065982
    ctx->pc = 0x215348u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x21534c: 0x46064201
    ctx->pc = 0x21534cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
    // 0x215350: 0xe6280034
    ctx->pc = 0x215350u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x215354: 0x460c5ac2
    ctx->pc = 0x215354u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x215358: 0x460d7bc2
    ctx->pc = 0x215358u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[13]);
    // 0x21535c: 0x460f5ac1
    ctx->pc = 0x21535cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[15]);
    // 0x215360: 0xe62b0038
    ctx->pc = 0x215360u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x215364: 0xdfbf0090
    ctx->pc = 0x215364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x215368: 0xdfb20080
    ctx->pc = 0x215368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21536c: 0xdfb10070
    ctx->pc = 0x21536cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x215370: 0xdfb00060
    ctx->pc = 0x215370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x215374: 0xc7b500a8
    ctx->pc = 0x215374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x215378: 0xc7b400a0
    ctx->pc = 0x215378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21537c: 0x3e00008
    ctx->pc = 0x21537Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215380u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215384u;
}
