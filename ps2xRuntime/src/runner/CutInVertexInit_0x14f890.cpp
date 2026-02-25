#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CutInVertexInit
// Address: 0x14f890 - 0x14fb70
void CutInVertexInit_0x14f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CutInVertexInit_0x14f890");
#endif

    ctx->pc = 0x14f890u;

    // 0x14f890: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14f894: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14f898: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14f898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14f89c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14f8a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14f8a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14f8a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f8ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f8b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f8b8: 0x14800053  bnez        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x14F8B8u;
    {
        const bool branch_taken_0x14f8b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8B8u;
            // 0x14f8bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8b8) {
            ctx->pc = 0x14FA08u;
            goto label_14fa08;
        }
    }
    ctx->pc = 0x14F8C0u;
    // 0x14f8c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x14f8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x14f8c4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x14f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x14f8c8: 0x8c233558  lw          $v1, 0x3558($at)
    ctx->pc = 0x14f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13656)));
    // 0x14f8cc: 0x244298a0  addiu       $v0, $v0, -0x6760
    ctx->pc = 0x14f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x14f8d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f8d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f8dc: 0xc05c00c  jal         func_170030
    ctx->pc = 0x14F8DCu;
    SET_GPR_U32(ctx, 31, 0x14F8E4u);
    ctx->pc = 0x14F8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8DCu;
            // 0x14f8e0: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F8E4u; }
        if (ctx->pc != 0x14F8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F8E4u; }
        if (ctx->pc != 0x14F8E4u) { return; }
    }
    ctx->pc = 0x14F8E4u;
    // 0x14f8e4: 0x3c1e0028  lui         $fp, 0x28
    ctx->pc = 0x14f8e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)40 << 16));
    // 0x14f8e8: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x14f8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x14f8ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14f8ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8f0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14f8f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f8f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14f8f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8fc: 0x27de9f60  addiu       $fp, $fp, -0x60A0
    ctx->pc = 0x14f8fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942560));
    // 0x14f900: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x14f900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14f904: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x14f904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f908: 0x26319d60  addiu       $s1, $s1, -0x62A0
    ctx->pc = 0x14f908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942048));
    // 0x14f90c: 0x0  nop
    ctx->pc = 0x14f90cu;
    // NOP
label_14f910:
    // 0x14f910: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x14f910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x14f914: 0x771023  subu        $v0, $v1, $s7
    ctx->pc = 0x14f914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x14f918: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14f918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f91c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x14f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14f920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f928: 0x0  nop
    ctx->pc = 0x14f928u;
    // NOP
    // 0x14f92c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x14f92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14f930: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x14f930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x14f934: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x14f934u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x14f938: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14f93c: 0xc053ef0  jal         func_14FBC0
    ctx->pc = 0x14F93Cu;
    SET_GPR_U32(ctx, 31, 0x14F944u);
    ctx->pc = 0x14F940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F93Cu;
            // 0x14f940: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FBC0u;
    if (runtime->hasFunction(0x14FBC0u)) {
        auto targetFn = runtime->lookupFunction(0x14FBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F944u; }
        if (ctx->pc != 0x14F944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F944u; }
        if (ctx->pc != 0x14F944u) { return; }
    }
    ctx->pc = 0x14F944u;
    // 0x14f944: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x14f944u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f948: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14f94c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x14f94cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f950: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x14f950u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14f954: 0x24429f60  addiu       $v0, $v0, -0x60A0
    ctx->pc = 0x14f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942560));
    // 0x14f958: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x14f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14f95c: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x14f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x14f960: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x14f960u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x14f964: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x14f964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14f968: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14f96c: 0xc053ef0  jal         func_14FBC0
    ctx->pc = 0x14F96Cu;
    SET_GPR_U32(ctx, 31, 0x14F974u);
    ctx->pc = 0x14F970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F96Cu;
            // 0x14f970: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FBC0u;
    if (runtime->hasFunction(0x14FBC0u)) {
        auto targetFn = runtime->lookupFunction(0x14FBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F974u; }
        if (ctx->pc != 0x14F974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F974u; }
        if (ctx->pc != 0x14F974u) { return; }
    }
    ctx->pc = 0x14F974u;
    // 0x14f974: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x14f974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14f978: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x14f978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14f97c: 0xc053ee4  jal         func_14FB90
    ctx->pc = 0x14F97Cu;
    SET_GPR_U32(ctx, 31, 0x14F984u);
    ctx->pc = 0x14F980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F97Cu;
            // 0x14f980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FB90u;
    if (runtime->hasFunction(0x14FB90u)) {
        auto targetFn = runtime->lookupFunction(0x14FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F984u; }
        if (ctx->pc != 0x14F984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F984u; }
        if (ctx->pc != 0x14F984u) { return; }
    }
    ctx->pc = 0x14F984u;
    // 0x14f984: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14f988: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x14f988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14f98c: 0x24429d60  addiu       $v0, $v0, -0x62A0
    ctx->pc = 0x14f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942048));
    // 0x14f990: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x14f990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14f994: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x14f994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14f998: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x14f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14f99c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14f9a0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14f9a4: 0xc053ee4  jal         func_14FB90
    ctx->pc = 0x14F9A4u;
    SET_GPR_U32(ctx, 31, 0x14F9ACu);
    ctx->pc = 0x14F9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9A4u;
            // 0x14f9a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FB90u;
    if (runtime->hasFunction(0x14FB90u)) {
        auto targetFn = runtime->lookupFunction(0x14FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9ACu; }
        if (ctx->pc != 0x14F9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9ACu; }
        if (ctx->pc != 0x14F9ACu) { return; }
    }
    ctx->pc = 0x14F9ACu;
    // 0x14f9ac: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14f9b0: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x14f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x14f9b4: 0x24849d50  addiu       $a0, $a0, -0x62B0
    ctx->pc = 0x14f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942032));
    // 0x14f9b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14f9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14f9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9c0: 0xc053edc  jal         func_14FB70
    ctx->pc = 0x14F9C0u;
    SET_GPR_U32(ctx, 31, 0x14F9C8u);
    ctx->pc = 0x14F9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9C0u;
            // 0x14f9c4: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FB70u;
    if (runtime->hasFunction(0x14FB70u)) {
        auto targetFn = runtime->lookupFunction(0x14FB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9C8u; }
        if (ctx->pc != 0x14F9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x14fb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9C8u; }
        if (ctx->pc != 0x14F9C8u) { return; }
    }
    ctx->pc = 0x14F9C8u;
    // 0x14f9c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x14f9c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14f9cc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x14f9d0: 0x2ac30008  slti        $v1, $s6, 0x8
    ctx->pc = 0x14f9d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14f9d4: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x14f9d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x14f9d8: 0x27de0020  addiu       $fp, $fp, 0x20
    ctx->pc = 0x14f9d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x14f9dc: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x14f9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x14f9e0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x14f9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x14f9e4: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x14F9E4u;
    {
        const bool branch_taken_0x14f9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9E4u;
            // 0x14f9e8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9e4) {
            ctx->pc = 0x14F910u;
            goto label_14f910;
        }
    }
    ctx->pc = 0x14F9ECu;
    // 0x14f9ec: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f9f4: 0xac209d48  sw          $zero, -0x62B8($at)
    ctx->pc = 0x14f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942024), GPR_U32(ctx, 0));
    // 0x14f9f8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f9fc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x14F9FCu;
    {
        const bool branch_taken_0x14f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9FCu;
            // 0x14fa00: 0xac239d40  sw          $v1, -0x62C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9fc) {
            ctx->pc = 0x14FB40u;
            goto label_14fb40;
        }
    }
    ctx->pc = 0x14FA04u;
    // 0x14fa04: 0x0  nop
    ctx->pc = 0x14fa04u;
    // NOP
label_14fa08:
    // 0x14fa08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x14fa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x14fa0c: 0x8c23355c  lw          $v1, 0x355C($at)
    ctx->pc = 0x14fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13660)));
    // 0x14fa10: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x14fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x14fa14: 0x244298a0  addiu       $v0, $v0, -0x6760
    ctx->pc = 0x14fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x14fa18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fa1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fa20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fa24: 0xc05c00c  jal         func_170030
    ctx->pc = 0x14FA24u;
    SET_GPR_U32(ctx, 31, 0x14FA2Cu);
    ctx->pc = 0x14FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA24u;
            // 0x14fa28: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA2Cu; }
        if (ctx->pc != 0x14FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA2Cu; }
        if (ctx->pc != 0x14FA2Cu) { return; }
    }
    ctx->pc = 0x14FA2Cu;
    // 0x14fa2c: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x14fa2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    // 0x14fa30: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x14fa30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x14fa34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14fa34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa38: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x14fa38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14fa3c: 0x2652a060  addiu       $s2, $s2, -0x5FA0
    ctx->pc = 0x14fa3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942816));
    // 0x14fa40: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x14fa40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x14fa44: 0x26109e60  addiu       $s0, $s0, -0x61A0
    ctx->pc = 0x14fa44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942304));
label_14fa48:
    // 0x14fa48: 0x2662fff8  addiu       $v0, $s3, -0x8
    ctx->pc = 0x14fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    // 0x14fa4c: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x14fa4cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fa50: 0x2a940  sll         $s5, $v0, 5
    ctx->pc = 0x14fa50u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14fa54: 0x26a20080  addiu       $v0, $s5, 0x80
    ctx->pc = 0x14fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x14fa58: 0x161823  negu        $v1, $s6
    ctx->pc = 0x14fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x14fa5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fa60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14fa64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fa68: 0x0  nop
    ctx->pc = 0x14fa68u;
    // NOP
    // 0x14fa6c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x14fa6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14fa70: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x14fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x14fa74: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x14fa74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x14fa78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14fa78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14fa7c: 0xc053ef0  jal         func_14FBC0
    ctx->pc = 0x14FA7Cu;
    SET_GPR_U32(ctx, 31, 0x14FA84u);
    ctx->pc = 0x14FA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA7Cu;
            // 0x14fa80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FBC0u;
    if (runtime->hasFunction(0x14FBC0u)) {
        auto targetFn = runtime->lookupFunction(0x14FBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA84u; }
        if (ctx->pc != 0x14FA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA84u; }
        if (ctx->pc != 0x14FA84u) { return; }
    }
    ctx->pc = 0x14FA84u;
    // 0x14fa84: 0x26c20080  addiu       $v0, $s6, 0x80
    ctx->pc = 0x14fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x14fa88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fa8c: 0x11b100  sll         $s6, $s1, 4
    ctx->pc = 0x14fa8cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14fa90: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x14fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x14fa94: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x14fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14fa98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14fa98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fa9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14faa0: 0x24429f60  addiu       $v0, $v0, -0x60A0
    ctx->pc = 0x14faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942560));
    // 0x14faa4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x14faa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x14faa8: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x14faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14faac: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x14faacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x14fab0: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x14fab0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x14fab4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14fab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14fab8: 0xc053ef0  jal         func_14FBC0
    ctx->pc = 0x14FAB8u;
    SET_GPR_U32(ctx, 31, 0x14FAC0u);
    ctx->pc = 0x14FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAB8u;
            // 0x14fabc: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FBC0u;
    if (runtime->hasFunction(0x14FBC0u)) {
        auto targetFn = runtime->lookupFunction(0x14FBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAC0u; }
        if (ctx->pc != 0x14FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAC0u; }
        if (ctx->pc != 0x14FAC0u) { return; }
    }
    ctx->pc = 0x14FAC0u;
    // 0x14fac0: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x14fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14fac4: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x14fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14fac8: 0xc053ee4  jal         func_14FB90
    ctx->pc = 0x14FAC8u;
    SET_GPR_U32(ctx, 31, 0x14FAD0u);
    ctx->pc = 0x14FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAC8u;
            // 0x14facc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FB90u;
    if (runtime->hasFunction(0x14FB90u)) {
        auto targetFn = runtime->lookupFunction(0x14FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAD0u; }
        if (ctx->pc != 0x14FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAD0u; }
        if (ctx->pc != 0x14FAD0u) { return; }
    }
    ctx->pc = 0x14FAD0u;
    // 0x14fad0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14fad4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x14fad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14fad8: 0x24429d60  addiu       $v0, $v0, -0x62A0
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942048));
    // 0x14fadc: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x14fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14fae0: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x14fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14fae4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x14fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14fae8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x14fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x14faec: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14faecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14faf0: 0xc053ee4  jal         func_14FB90
    ctx->pc = 0x14FAF0u;
    SET_GPR_U32(ctx, 31, 0x14FAF8u);
    ctx->pc = 0x14FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAF0u;
            // 0x14faf4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FB90u;
    if (runtime->hasFunction(0x14FB90u)) {
        auto targetFn = runtime->lookupFunction(0x14FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAF8u; }
        if (ctx->pc != 0x14FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAF8u; }
        if (ctx->pc != 0x14FAF8u) { return; }
    }
    ctx->pc = 0x14FAF8u;
    // 0x14faf8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14fafc: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x14fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x14fb00: 0x24849d54  addiu       $a0, $a0, -0x62AC
    ctx->pc = 0x14fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942036));
    // 0x14fb04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14fb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb08: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14fb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb0c: 0xc053edc  jal         func_14FB70
    ctx->pc = 0x14FB0Cu;
    SET_GPR_U32(ctx, 31, 0x14FB14u);
    ctx->pc = 0x14FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB0Cu;
            // 0x14fb10: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FB70u;
    if (runtime->hasFunction(0x14FB70u)) {
        auto targetFn = runtime->lookupFunction(0x14FB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB14u; }
        if (ctx->pc != 0x14FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x14fb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB14u; }
        if (ctx->pc != 0x14FB14u) { return; }
    }
    ctx->pc = 0x14FB14u;
    // 0x14fb14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14fb14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14fb18: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x14fb18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14fb1c: 0x2a630010  slti        $v1, $s3, 0x10
    ctx->pc = 0x14fb1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x14fb20: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x14fb24: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x14FB24u;
    {
        const bool branch_taken_0x14fb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB24u;
            // 0x14fb28: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb24) {
            ctx->pc = 0x14FA48u;
            goto label_14fa48;
        }
    }
    ctx->pc = 0x14FB2Cu;
    // 0x14fb2c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14fb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14fb30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fb34: 0xac209d4c  sw          $zero, -0x62B4($at)
    ctx->pc = 0x14fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942028), GPR_U32(ctx, 0));
    // 0x14fb38: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14fb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14fb3c: 0xac239d44  sw          $v1, -0x62BC($at)
    ctx->pc = 0x14fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942020), GPR_U32(ctx, 3));
label_14fb40:
    // 0x14fb40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14fb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14fb44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14fb44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14fb48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14fb48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fb4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14fb4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fb50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14fb50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fb54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14fb54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fb58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14fb58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fb5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14fb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fb60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14fb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fb64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14fb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fb68: 0x3e00008  jr          $ra
    ctx->pc = 0x14FB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB68u;
            // 0x14fb6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F910u: goto label_14f910;
            case 0x14FA08u: goto label_14fa08;
            case 0x14FA48u: goto label_14fa48;
            case 0x14FB40u: goto label_14fb40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FB70u;
}
