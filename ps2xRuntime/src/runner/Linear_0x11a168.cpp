#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Linear
// Address: 0x11a168 - 0x11a330
void Linear_0x11a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Linear_0x11a168");
#endif

    ctx->pc = 0x11a168u;

    // 0x11a168: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11a16c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x11a16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a170: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11a174: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x11a174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a178: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11a178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11a17c: 0x2517fff0  addiu       $s7, $t0, -0x10
    ctx->pc = 0x11a17cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x11a180: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x11a180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x11a184: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11a184u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a188: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11a188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11a18c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11a190: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a194: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a198: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a19c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a1a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a1a4: 0x8d03fff0  lw          $v1, -0x10($t0)
    ctx->pc = 0x11a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967280)));
    // 0x11a1a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A1A8u;
    {
        const bool branch_taken_0x11a1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1A8u;
            // 0x11a1ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1a8) {
            ctx->pc = 0x11A1BCu;
            goto label_11a1bc;
        }
    }
    ctx->pc = 0x11A1B0u;
    // 0x11a1b0: 0x24021200  addiu       $v0, $zero, 0x1200
    ctx->pc = 0x11a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x11a1b4: 0x24031200  addiu       $v1, $zero, 0x1200
    ctx->pc = 0x11a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x11a1b8: 0xad02fff0  sw          $v0, -0x10($t0)
    ctx->pc = 0x11a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967280), GPR_U32(ctx, 2));
label_11a1bc:
    // 0x11a1bc: 0x30670200  andi        $a3, $v1, 0x200
    ctx->pc = 0x11a1bcu;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)512u)));
    // 0x11a1c0: 0x3066fc00  andi        $a2, $v1, 0xFC00
    ctx->pc = 0x11a1c0u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64512u)));
    // 0x11a1c4: 0x7102b  sltu        $v0, $zero, $a3
    ctx->pc = 0x11a1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11a1c8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x11a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x11a1cc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x11a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a1d0: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x11a1d0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11a1d4: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x11a1d4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x11a1d8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x11a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a1dc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x11a1dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x11a1e0: 0x1221818  mult        $v1, $t1, $v0
    ctx->pc = 0x11a1e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a1e4: 0x1222818  mult        $a1, $t1, $v0
    ctx->pc = 0x11a1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a1e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a1ec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x11a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x11a1f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11a1f4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x11a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11a1f8: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x11A1F8u;
    {
        const bool branch_taken_0x11a1f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1F8u;
            // 0x11a1fc: 0x1023021  addu        $a2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1f8) {
            ctx->pc = 0x11A250u;
            goto label_11a250;
        }
    }
    ctx->pc = 0x11A200u;
    // 0x11a200: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11a200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a204: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a208: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11a208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a20c: 0x24b40010  addiu       $s4, $a1, 0x10
    ctx->pc = 0x11a20cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11a210: 0x24d50010  addiu       $s5, $a2, 0x10
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x11a214: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x11a214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a218:
    // 0x11a218: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x11a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x11a21c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a21cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a220: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x11a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x11a224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11a228: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x11a22c: 0xc046852  jal         func_11A148
    ctx->pc = 0x11A22Cu;
    SET_GPR_U32(ctx, 31, 0x11A234u);
    ctx->pc = 0x11A230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A22Cu;
            // 0x11a230: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A148u;
    if (runtime->hasFunction(0x11A148u)) {
        auto targetFn = runtime->lookupFunction(0x11A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A234u; }
        if (ctx->pc != 0x11A234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        linear_0x11a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A234u; }
        if (ctx->pc != 0x11A234u) { return; }
    }
    ctx->pc = 0x11A234u;
    // 0x11a234: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x11a234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x11a238: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x11a238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a23c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11A23Cu;
    {
        const bool branch_taken_0x11a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A23Cu;
            // 0x11a240: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a23c) {
            ctx->pc = 0x11A218u;
            goto label_11a218;
        }
    }
    ctx->pc = 0x11A244u;
    // 0x11a244: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x11a244u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
    // 0x11a248: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a24c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x11a24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a250:
    // 0x11a250: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x11a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11a254: 0x3062fc00  andi        $v0, $v1, 0xFC00
    ctx->pc = 0x11a254u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64512u)));
    // 0x11a258: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11A258u;
    {
        const bool branch_taken_0x11a258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A258u;
            // 0x11a25c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a258) {
            ctx->pc = 0x11A2B4u;
            goto label_11a2b4;
        }
    }
    ctx->pc = 0x11A260u;
    // 0x11a260: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a264: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11a264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a268: 0x24b40010  addiu       $s4, $a1, 0x10
    ctx->pc = 0x11a268u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11a26c: 0x24d50010  addiu       $s5, $a2, 0x10
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x11a270: 0x26d00010  addiu       $s0, $s6, 0x10
    ctx->pc = 0x11a270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x11a274: 0x0  nop
    ctx->pc = 0x11a274u;
    // NOP
label_11a278:
    // 0x11a278: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x11a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x11a27c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a27cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a280: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x11a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x11a284: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11a284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11a288: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x11a288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x11a28c: 0xc046852  jal         func_11A148
    ctx->pc = 0x11A28Cu;
    SET_GPR_U32(ctx, 31, 0x11A294u);
    ctx->pc = 0x11A290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A28Cu;
            // 0x11a290: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A148u;
    if (runtime->hasFunction(0x11A148u)) {
        auto targetFn = runtime->lookupFunction(0x11A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A294u; }
        if (ctx->pc != 0x11A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        linear_0x11a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A294u; }
        if (ctx->pc != 0x11A294u) { return; }
    }
    ctx->pc = 0x11A294u;
    // 0x11a294: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x11a294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x11a298: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x11a298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a29c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11A29Cu;
    {
        const bool branch_taken_0x11a29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A29Cu;
            // 0x11a2a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a29c) {
            ctx->pc = 0x11A278u;
            goto label_11a278;
        }
    }
    ctx->pc = 0x11A2A4u;
    // 0x11a2a4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x11a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11a2a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2ac: 0xaec0001c  sw          $zero, 0x1C($s6)
    ctx->pc = 0x11a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
    // 0x11a2b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x11a2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a2b4:
    // 0x11a2b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11a2b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11a2b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11a2bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A2BCu;
    {
        const bool branch_taken_0x11a2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2BCu;
            // 0x11a2c0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2bc) {
            ctx->pc = 0x11A300u;
            goto label_11a300;
        }
    }
    ctx->pc = 0x11A2C4u;
    // 0x11a2c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11a2c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2cc: 0x26d00020  addiu       $s0, $s6, 0x20
    ctx->pc = 0x11a2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_11a2d0:
    // 0x11a2d0: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x11a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x11a2d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a2d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a2d8: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x11a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x11a2dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11a2dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11a2e0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x11a2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x11a2e4: 0xc046852  jal         func_11A148
    ctx->pc = 0x11A2E4u;
    SET_GPR_U32(ctx, 31, 0x11A2ECu);
    ctx->pc = 0x11A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2E4u;
            // 0x11a2e8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A148u;
    if (runtime->hasFunction(0x11A148u)) {
        auto targetFn = runtime->lookupFunction(0x11A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2ECu; }
        if (ctx->pc != 0x11A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        linear_0x11a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2ECu; }
        if (ctx->pc != 0x11A2ECu) { return; }
    }
    ctx->pc = 0x11A2ECu;
    // 0x11a2ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x11a2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x11a2f0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x11a2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a2f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11A2F4u;
    {
        const bool branch_taken_0x11a2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2F4u;
            // 0x11a2f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2f4) {
            ctx->pc = 0x11A2D0u;
            goto label_11a2d0;
        }
    }
    ctx->pc = 0x11A2FCu;
    // 0x11a2fc: 0xaec0002c  sw          $zero, 0x2C($s6)
    ctx->pc = 0x11a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 0));
label_11a300:
    // 0x11a300: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11a300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a304: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x11a304u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a308: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11a308u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a30c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11a30cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a310: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a310u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a314: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a318: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a31c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a324: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x11a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a328: 0x3e00008  jr          $ra
    ctx->pc = 0x11A328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A328u;
            // 0x11a32c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A1BCu: goto label_11a1bc;
            case 0x11A218u: goto label_11a218;
            case 0x11A250u: goto label_11a250;
            case 0x11A278u: goto label_11a278;
            case 0x11A2B4u: goto label_11a2b4;
            case 0x11A2D0u: goto label_11a2d0;
            case 0x11A300u: goto label_11a300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A330u;
}
