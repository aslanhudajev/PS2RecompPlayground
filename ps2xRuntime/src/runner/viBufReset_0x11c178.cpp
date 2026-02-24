#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufReset
// Address: 0x11c178 - 0x11c2c0
void viBufReset_0x11c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufReset_0x11c178");
#endif

    ctx->pc = 0x11c178u;

    // 0x11c178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c180: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c184: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c188: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c18c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c190: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11c190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c198: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x11c198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x11c19c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x11c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x11c1a0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x11c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x11c1a4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x11c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x11c1a8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x11c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x11c1ac: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x11c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x11c1b0: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C1B0u;
    {
        const bool branch_taken_0x11c1b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11C1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1B0u;
            // 0x11c1b4: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1b0) {
            ctx->pc = 0x11C1F8u;
            goto label_11c1f8;
        }
    }
    ctx->pc = 0x11C1B8u;
    // 0x11c1b8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x11c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x11c1bc: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x11c1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_11c1c0:
    // 0x11c1c0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x11c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11c1c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c1c8: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x11c1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11c1cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11c1d0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x11c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11c1d4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x11c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x11c1d8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x11c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x11c1dc: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x11c1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x11c1e0: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x11c1e4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x11c1e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11c1e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x11C1E8u;
    {
        const bool branch_taken_0x11c1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1E8u;
            // 0x11c1ec: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1e8) {
            ctx->pc = 0x11C1C0u;
            goto label_11c1c0;
        }
    }
    ctx->pc = 0x11C1F0u;
    // 0x11c1f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C1F0u;
    {
        const bool branch_taken_0x11c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1F0u;
            // 0x11c1f4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1f0) {
            ctx->pc = 0x11C200u;
            goto label_11c200;
        }
    }
    ctx->pc = 0x11C1F8u;
label_11c1f8:
    // 0x11c1f8: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x11c1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11c1fc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x11c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_11c200:
    // 0x11c200: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C200u;
    {
        const bool branch_taken_0x11c200 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C200u;
            // 0x11c204: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c200) {
            ctx->pc = 0x11C248u;
            goto label_11c248;
        }
    }
    ctx->pc = 0x11C208u;
    // 0x11c208: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x11c20c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x11c20cu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)65535u)));
label_11c210:
    // 0x11c210: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c214: 0x112ac0  sll         $a1, $s1, 11
    ctx->pc = 0x11c214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x11c218: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11c21c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c220: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11c220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c224: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x11c224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11c228: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x11c228u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 16)));
    // 0x11c22c: 0xc047036  jal         func_11C0D8
    ctx->pc = 0x11C22Cu;
    SET_GPR_U32(ctx, 31, 0x11C234u);
    ctx->pc = 0x11C230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C22Cu;
            // 0x11c230: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C0D8u;
    if (runtime->hasFunction(0x11C0D8u)) {
        auto targetFn = runtime->lookupFunction(0x11C0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C234u; }
        if (ctx->pc != 0x11C234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x11c0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C234u; }
        if (ctx->pc != 0x11C234u) { return; }
    }
    ctx->pc = 0x11C234u;
    // 0x11c234: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11c234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11c238: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x11c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11c23c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11c23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11c240: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11C240u;
    {
        const bool branch_taken_0x11c240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C240u;
            // 0x11c244: 0x8e470004  lw          $a3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c240) {
            ctx->pc = 0x11C210u;
            goto label_11c210;
        }
    }
    ctx->pc = 0x11C248u;
label_11c248:
    // 0x11c248: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x11c248u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x11c24c: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x11c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11c250: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x11c250u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)65535u)));
    // 0x11c254: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x11c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11c258: 0xf02824  and         $a1, $a3, $s0
    ctx->pc = 0x11c258u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x11c25c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x11c25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c260: 0xc047036  jal         func_11C0D8
    ctx->pc = 0x11C260u;
    SET_GPR_U32(ctx, 31, 0x11C268u);
    ctx->pc = 0x11C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C260u;
            // 0x11c264: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C0D8u;
    if (runtime->hasFunction(0x11C0D8u)) {
        auto targetFn = runtime->lookupFunction(0x11C0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C268u; }
        if (ctx->pc != 0x11C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x11c0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C268u; }
        if (ctx->pc != 0x11C268u) { return; }
    }
    ctx->pc = 0x11C268u;
    // 0x11c268: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c26c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x11c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c270: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x11c270u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46112u)));
    // 0x11c274: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11c278: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11c278u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11c27c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11c280: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x11c280u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x11c284: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x11c284u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46096u)));
    // 0x11c288: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c28c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x11c28cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x11c290: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x11c290u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 16)));
    // 0x11c294: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x11c294u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46128u)));
    // 0x11c298: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x11c298u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x11c29c: 0xc04701c  jal         func_11C070
    ctx->pc = 0x11C29Cu;
    SET_GPR_U32(ctx, 31, 0x11C2A4u);
    ctx->pc = 0x11C2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C29Cu;
            // 0x11c2a0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C070u;
    if (runtime->hasFunction(0x11C070u)) {
        auto targetFn = runtime->lookupFunction(0x11C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C2A4u; }
        if (ctx->pc != 0x11C2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C2A4u; }
        if (ctx->pc != 0x11C2A4u) { return; }
    }
    ctx->pc = 0x11C2A4u;
    // 0x11c2a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c2ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c2acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c2b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11c2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2B8u;
            // 0x11c2bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C1C0u: goto label_11c1c0;
            case 0x11C1F8u: goto label_11c1f8;
            case 0x11C200u: goto label_11c200;
            case 0x11C210u: goto label_11c210;
            case 0x11C248u: goto label_11c248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C2C0u;
}
