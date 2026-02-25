#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateMissile
// Address: 0x153bc0 - 0x153d3c
void CreateMissile_0x153bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateMissile_0x153bc0");
#endif

    ctx->pc = 0x153bc0u;

    // 0x153bc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x153bc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x153bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x153bc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x153bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x153bcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x153bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x153bd0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x153bd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153bd8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x153bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153be0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x153be4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153be8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x153BE8u;
    {
        const bool branch_taken_0x153be8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x153BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BE8u;
            // 0x153bec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153be8) {
            ctx->pc = 0x153BF8u;
            goto label_153bf8;
        }
    }
    ctx->pc = 0x153BF0u;
    // 0x153bf0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x153bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x153bf4: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_153bf8:
    // 0x153bf8: 0x3c034ec4  lui         $v1, 0x4EC4
    ctx->pc = 0x153bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20164 << 16));
    // 0x153bfc: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x153bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x153c00: 0x3463ec4f  ori         $v1, $v1, 0xEC4F
    ctx->pc = 0x153c00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)60495u)));
    // 0x153c04: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x153c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153c08: 0x0  nop
    ctx->pc = 0x153c08u;
    // NOP
    // 0x153c0c: 0x0  nop
    ctx->pc = 0x153c0cu;
    // NOP
    // 0x153c10: 0x1810  mfhi        $v1
    ctx->pc = 0x153c10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x153c14: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x153c14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x153c18: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x153c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153c1c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x153c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x153c20: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x153c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153c24: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x153C24u;
    {
        const bool branch_taken_0x153c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C24u;
            // 0x153c28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c24) {
            ctx->pc = 0x153D18u;
            goto label_153d18;
        }
    }
    ctx->pc = 0x153C2Cu;
    // 0x153c2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x153c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153c30:
    // 0x153c30: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153C30u;
    SET_GPR_U32(ctx, 31, 0x153C38u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C38u; }
        if (ctx->pc != 0x153C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C38u; }
        if (ctx->pc != 0x153C38u) { return; }
    }
    ctx->pc = 0x153C38u;
    // 0x153c38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153c3c: 0x26630008  addiu       $v1, $s3, 0x8
    ctx->pc = 0x153c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x153c40: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x153c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x153c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c48: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x153c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x153c4c: 0x8ea40098  lw          $a0, 0x98($s5)
    ctx->pc = 0x153c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x153c50: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x153c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x153c54: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x153c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x153c58: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x153c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x153c5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x153c60: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x153c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x153c64: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x153c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x153c68: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x153c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x153c6c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x153C6Cu;
    SET_GPR_U32(ctx, 31, 0x153C74u);
    ctx->pc = 0x153C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153C6Cu;
            // 0x153c70: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C74u; }
        if (ctx->pc != 0x153C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C74u; }
        if (ctx->pc != 0x153C74u) { return; }
    }
    ctx->pc = 0x153C74u;
    // 0x153c74: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x153c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x153c78: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x153c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x153c7c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x153c7cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153c80: 0x0  nop
    ctx->pc = 0x153c80u;
    // NOP
    // 0x153c84: 0x0  nop
    ctx->pc = 0x153c84u;
    // NOP
    // 0x153c88: 0x2010  mfhi        $a0
    ctx->pc = 0x153c88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x153c8c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x153c90: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x153c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x153c94: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x153c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x153c98: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153C98u;
    SET_GPR_U32(ctx, 31, 0x153CA0u);
    ctx->pc = 0x153C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153C98u;
            // 0x153c9c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153CA0u; }
        if (ctx->pc != 0x153CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153CA0u; }
        if (ctx->pc != 0x153CA0u) { return; }
    }
    ctx->pc = 0x153CA0u;
    // 0x153ca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x153ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153ca4: 0x131823  negu        $v1, $s3
    ctx->pc = 0x153ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x153ca8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x153ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x153cac: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153cb0: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x153cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x153cb4: 0x26630008  addiu       $v1, $s3, 0x8
    ctx->pc = 0x153cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x153cb8: 0x8ea50098  lw          $a1, 0x98($s5)
    ctx->pc = 0x153cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x153cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153cc0: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x153cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x153cc4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x153cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x153cc8: 0x8ea5009c  lw          $a1, 0x9C($s5)
    ctx->pc = 0x153cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x153ccc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x153cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x153cd0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x153cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x153cd4: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x153cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x153cd8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x153cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x153cdc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x153CDCu;
    SET_GPR_U32(ctx, 31, 0x153CE4u);
    ctx->pc = 0x153CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153CDCu;
            // 0x153ce0: 0xac460030  sw          $a2, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153CE4u; }
        if (ctx->pc != 0x153CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153CE4u; }
        if (ctx->pc != 0x153CE4u) { return; }
    }
    ctx->pc = 0x153CE4u;
    // 0x153ce4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x153ce8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x153ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x153cec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x153cecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153cf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x153cf4: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x153cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x153cf8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x153cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x153cfc: 0x3010  mfhi        $a2
    ctx->pc = 0x153cfcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x153d00: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x153d04: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x153d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153d08: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x153d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x153d0c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x153d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x153d10: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x153D10u;
    {
        const bool branch_taken_0x153d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D10u;
            // 0x153d14: 0xae04003c  sw          $a0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d10) {
            ctx->pc = 0x153C30u;
            goto label_153c30;
        }
    }
    ctx->pc = 0x153D18u;
label_153d18:
    // 0x153d18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x153d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153d1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x153d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153d20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x153d20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153d34: 0x3e00008  jr          $ra
    ctx->pc = 0x153D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D34u;
            // 0x153d38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153BF8u: goto label_153bf8;
            case 0x153C30u: goto label_153c30;
            case 0x153D18u: goto label_153d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153D3Cu;
}
