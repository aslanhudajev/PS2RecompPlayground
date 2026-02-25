#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _motionComp0
// Address: 0x124db0 - 0x125000
void _motionComp0_0x124db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_motionComp0_0x124db0");
#endif

    ctx->pc = 0x124db0u;

    // 0x124db0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x124db4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x124db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x124db8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x124db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x124dbc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x124dbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dc0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x124dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x124dc4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x124dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x124dc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124dcc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x124dccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dd0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x124dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x124dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dd8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x124dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x124ddc: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x124ddcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)1u)));
    // 0x124de0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x124de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x124de4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x124de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x124de8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x124de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x124dec: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x124decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x124df0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x124df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x124df4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x124df4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x124df8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124DF8u;
    {
        const bool branch_taken_0x124df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124df8) {
            ctx->pc = 0x124DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124DF8u;
            // 0x124dfc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124E00u;
            goto label_124e00;
        }
    }
    ctx->pc = 0x124E00u;
label_124e00:
    // 0x124e00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124e04: 0x1810  mfhi        $v1
    ctx->pc = 0x124e04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x124e08: 0xb812  mflo        $s7
    ctx->pc = 0x124e08u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x124e0c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x124e0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e10: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x124e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x124e14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x124E14u;
    {
        const bool branch_taken_0x124e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E14u;
            // 0x124e18: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e14) {
            ctx->pc = 0x124E60u;
            goto label_124e60;
        }
    }
    ctx->pc = 0x124E1Cu;
    // 0x124e1c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x124e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x124e20: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x124e24: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x124e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x124e28: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x124e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x124e2c: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x124e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
label_124e30:
    // 0x124e30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x124e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x124e34: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x124e34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)54272u)));
    // 0x124e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x124e38u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x124e3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x124e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x124e40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x124e40u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x124e44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124E44u;
    {
        const bool branch_taken_0x124e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124e44) {
            ctx->pc = 0x124E30u;
            goto label_124e30;
        }
    }
    ctx->pc = 0x124E4Cu;
    // 0x124e4c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x124e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x124e50: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x124e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124e54: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x124e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x124e58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x124E58u;
    {
        const bool branch_taken_0x124e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E58u;
            // 0x124e5c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e58) {
            ctx->pc = 0x124EF4u;
            goto label_124ef4;
        }
    }
    ctx->pc = 0x124E60u;
label_124e60:
    // 0x124e60: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x124e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x124e64: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x124e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x124e68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124E68u;
    {
        const bool branch_taken_0x124e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E68u;
            // 0x124e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e68) {
            ctx->pc = 0x124E94u;
            goto label_124e94;
        }
    }
    ctx->pc = 0x124E70u;
    // 0x124e70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x124e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x124e74: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x124e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e78: 0x24a5f108  addiu       $a1, $a1, -0xEF8
    ctx->pc = 0x124e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963464));
    // 0x124e7c: 0xc04b010  jal         func_12C040
    ctx->pc = 0x124E7Cu;
    SET_GPR_U32(ctx, 31, 0x124E84u);
    ctx->pc = 0x124E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124E7Cu;
            // 0x124e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (runtime->hasFunction(0x12C040u)) {
        auto targetFn = runtime->lookupFunction(0x12C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E84u; }
        if (ctx->pc != 0x124E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E84u; }
        if (ctx->pc != 0x124E84u) { return; }
    }
    ctx->pc = 0x124E84u;
    // 0x124e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e8c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x124E8Cu;
    {
        const bool branch_taken_0x124e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E8Cu;
            // 0x124e90: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e8c) {
            ctx->pc = 0x124FD0u;
            goto label_124fd0;
        }
    }
    ctx->pc = 0x124E94u;
label_124e94:
    // 0x124e94: 0xc049400  jal         func_125000
    ctx->pc = 0x124E94u;
    SET_GPR_U32(ctx, 31, 0x124E9Cu);
    ctx->pc = 0x124E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124E94u;
            // 0x124e98: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125000u;
    if (runtime->hasFunction(0x125000u)) {
        auto targetFn = runtime->lookupFunction(0x125000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E9Cu; }
        if (ctx->pc != 0x124E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getAllRefs_0x125000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E9Cu; }
        if (ctx->pc != 0x124E9Cu) { return; }
    }
    ctx->pc = 0x124E9Cu;
    // 0x124e9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x124e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x124ea0: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x124ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x124ea4: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x124ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x124ea8: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x124ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x124eac: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x124eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
    // 0x124eb0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x124eb0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54272u)));
    // 0x124eb4: 0x0  nop
    ctx->pc = 0x124eb4u;
    // NOP
label_124eb8:
    // 0x124eb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124ebc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x124ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x124ec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x124ec0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x124ec4: 0x0  nop
    ctx->pc = 0x124ec4u;
    // NOP
    // 0x124ec8: 0x0  nop
    ctx->pc = 0x124ec8u;
    // NOP
    // 0x124ecc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124ECCu;
    {
        const bool branch_taken_0x124ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124ecc) {
            ctx->pc = 0x124EB8u;
            goto label_124eb8;
        }
    }
    ctx->pc = 0x124ED4u;
    // 0x124ed4: 0xc04a64e  jal         func_129938
    ctx->pc = 0x124ED4u;
    SET_GPR_U32(ctx, 31, 0x124EDCu);
    ctx->pc = 0x124ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124ED4u;
            // 0x124ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129938u;
    if (runtime->hasFunction(0x129938u)) {
        auto targetFn = runtime->lookupFunction(0x129938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124EDCu; }
        if (ctx->pc != 0x124EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dmaRefImage_0x129938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124EDCu; }
        if (ctx->pc != 0x124EDCu) { return; }
    }
    ctx->pc = 0x124EDCu;
    // 0x124edc: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x124edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x124ee0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x124ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x124ee4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ee8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x124ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124eec: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x124eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x124ef0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x124ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_124ef4:
    // 0x124ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ef8: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124EF8u;
    {
        const bool branch_taken_0x124ef8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x124ef8) {
            ctx->pc = 0x124EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124EF8u;
            // 0x124efc: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124F24u;
            goto label_124f24;
        }
    }
    ctx->pc = 0x124F00u;
    // 0x124f00: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x124f00u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)2u)));
    // 0x124f04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124F04u;
    {
        const bool branch_taken_0x124f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F04u;
            // 0x124f08: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f04) {
            ctx->pc = 0x124F20u;
            goto label_124f20;
        }
    }
    ctx->pc = 0x124F0Cu;
    // 0x124f0c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x124f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x124f10: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x124f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124f14: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x124f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x124f18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x124F18u;
    {
        const bool branch_taken_0x124f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F18u;
            // 0x124f1c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f18) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124F20u;
label_124f20:
    // 0x124f20: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x124f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_124f24:
    // 0x124f24: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x124f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x124f28: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x124f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124f2c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x124f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x124f30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x124f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_124f34:
    // 0x124f34: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x124f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x124f38: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x124f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x124f3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x124f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124f40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x124f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124f44: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x124f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124f48: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x124f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x124f4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x124f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x124f50: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x124f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x124f54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x124F54u;
    {
        const bool branch_taken_0x124f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x124F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F54u;
            // 0x124f58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f54) {
            ctx->pc = 0x124F90u;
            goto label_124f90;
        }
    }
    ctx->pc = 0x124F5Cu;
    // 0x124f5c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x124f60: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x124f64: 0x8e0501c0  lw          $a1, 0x1C0($s0)
    ctx->pc = 0x124f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x124f68: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x124f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124f6c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x124f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x124f70: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x124f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x124f74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x124f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x124f78: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x124f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124f7c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x124f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x124f80: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x124f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124f84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124f88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x124F88u;
    {
        const bool branch_taken_0x124f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F88u;
            // 0x124f8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f88) {
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124F90u;
label_124f90:
    // 0x124f90: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x124F90u;
    {
        const bool branch_taken_0x124f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x124f90) {
            ctx->pc = 0x124F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124F90u;
            // 0x124f94: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124F9Cu;
            goto label_124f9c;
        }
    }
    ctx->pc = 0x124F98u;
    // 0x124f98: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x124f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_124f9c:
    // 0x124f9c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x124f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x124fa0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x124fa4: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x124fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x124fa8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x124fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x124fac: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x124facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124fb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x124fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124fb4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x124fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x124fb8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x124fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124fbc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x124fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x124fc0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x124fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124fc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x124fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_124fcc:
    // 0x124fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124fd0:
    // 0x124fd0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x124fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x124fd4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x124fd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x124fd8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x124fd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124fdc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x124fdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x124fe0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x124fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x124fe4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x124fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124fe8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x124fe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124fec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x124fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124ff0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x124ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124ff4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x124FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124FF8u;
            // 0x124ffc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124E00u: goto label_124e00;
            case 0x124E30u: goto label_124e30;
            case 0x124E60u: goto label_124e60;
            case 0x124E94u: goto label_124e94;
            case 0x124EB8u: goto label_124eb8;
            case 0x124EF4u: goto label_124ef4;
            case 0x124F20u: goto label_124f20;
            case 0x124F24u: goto label_124f24;
            case 0x124F34u: goto label_124f34;
            case 0x124F90u: goto label_124f90;
            case 0x124F9Cu: goto label_124f9c;
            case 0x124FCCu: goto label_124fcc;
            case 0x124FD0u: goto label_124fd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125000u;
}
