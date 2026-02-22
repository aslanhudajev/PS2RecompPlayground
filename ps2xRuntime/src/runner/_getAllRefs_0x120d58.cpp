#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _getAllRefs
// Address: 0x120d58 - 0x121408
void _getAllRefs_0x120d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120d58u;

    // 0x120d58: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x120d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x120d5c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120d60: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x120d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x120d64: 0x24421df8  addiu       $v0, $v0, 0x1DF8
    ctx->pc = 0x120d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7672));
    // 0x120d68: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x120d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x120d6c: 0x240b0140  addiu       $t3, $zero, 0x140
    ctx->pc = 0x120d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x120d70: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x120d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x120d74: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x120d74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d78: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x120d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x120d7c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x120d7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d80: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x120d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x120d84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x120d84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d88: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x120d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x120d8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x120d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d90: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x120d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x120d94: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x120d94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120d98: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x120d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x120d9c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x120d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120da0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x120da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x120da4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x120da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120da8: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x120da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x120dac: 0x30cc0008  andi        $t4, $a2, 0x8
    ctx->pc = 0x120dacu;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)8u)));
    // 0x120db0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x120db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x120db4: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x120db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x120db8: 0x6b2018  mult        $a0, $v1, $t3
    ctx->pc = 0x120db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120dbc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x120dc0: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x120DC0u;
    {
        const bool branch_taken_0x120dc0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x120DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120DC0u;
            // 0x120dc4: 0xac60012c  sw          $zero, 0x12C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dc0) {
            ctx->pc = 0x120DDCu;
            goto label_120ddc;
        }
    }
    ctx->pc = 0x120DC8u;
    // 0x120dc8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120dcc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x120dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120dd0: 0x8c43197c  lw          $v1, 0x197C($v0)
    ctx->pc = 0x120dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6524)));
    // 0x120dd4: 0x1464010b  bne         $v1, $a0, . + 4 + (0x10B << 2)
    ctx->pc = 0x120DD4u;
    {
        const bool branch_taken_0x120dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x120DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120DD4u;
            // 0x120dd8: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dd4) {
            ctx->pc = 0x121204u;
            goto label_121204;
        }
    }
    ctx->pc = 0x120DDCu;
label_120ddc:
    // 0x120ddc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120de0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x120de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120de4: 0x8c4619ac  lw          $a2, 0x19AC($v0)
    ctx->pc = 0x120de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x120de8: 0x14c30075  bne         $a2, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x120DE8u;
    {
        const bool branch_taken_0x120de8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x120DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120DE8u;
            // 0x120dec: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120de8) {
            ctx->pc = 0x120FC0u;
            goto label_120fc0;
        }
    }
    ctx->pc = 0x120DF0u;
    // 0x120df0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x120df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120df4: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120DF4u;
    {
        const bool branch_taken_0x120df4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x120df4) {
            ctx->pc = 0x120DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120DF4u;
            // 0x120df8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120E08u;
            goto label_120e08;
        }
    }
    ctx->pc = 0x120DFCu;
    // 0x120dfc: 0x1580000d  bnez        $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x120DFCu;
    {
        const bool branch_taken_0x120dfc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x120dfc) {
            ctx->pc = 0x120E34u;
            goto label_120e34;
        }
    }
    ctx->pc = 0x120E04u;
    // 0x120e04: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x120e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_120e08:
    // 0x120e08: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120e0c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x120e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e14: 0x8c441800  lw          $a0, 0x1800($v0)
    ctx->pc = 0x120e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6144)));
    // 0x120e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x120e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x120e20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e24: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x120e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x120e28: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x120e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120e2c: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x120E2Cu;
    {
        const bool branch_taken_0x120e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120E2Cu;
            // 0x120e30: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e2c) {
            ctx->pc = 0x1211DCu;
            goto label_1211dc;
        }
    }
    ctx->pc = 0x120E34u;
label_120e34:
    // 0x120e34: 0x1677001f  bne         $s3, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x120E34u;
    {
        const bool branch_taken_0x120e34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        ctx->pc = 0x120E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120E34u;
            // 0x120e38: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e34) {
            ctx->pc = 0x120EB4u;
            goto label_120eb4;
        }
    }
    ctx->pc = 0x120E3Cu;
    // 0x120e3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x120e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x120e40: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x120e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x120e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e48: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x120e48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120e4c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x120e4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x120e50: 0x8e041800  lw          $a0, 0x1800($s0)
    ctx->pc = 0x120e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x120e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120e5c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x120e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120e60: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x120e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x120e64: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x120e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e68: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x120e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x120e6c: 0xc048502  jal         func_121408
    ctx->pc = 0x120E6Cu;
    SET_GPR_U32(ctx, 31, 0x120E74u);
    ctx->pc = 0x120E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120E6Cu;
            // 0x120e70: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120E74u; }
        if (ctx->pc != 0x120E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120E74u; }
        if (ctx->pc != 0x120E74u) { return; }
    }
    ctx->pc = 0x120E74u;
    // 0x120e74: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x120e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x120e78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120e7c: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x120e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x120e80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e84: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x120e84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x120e88: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x120e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x120e8c: 0x8e041800  lw          $a0, 0x1800($s0)
    ctx->pc = 0x120e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x120e90: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x120e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120e94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120e98: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x120e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e9c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x120e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x120ea0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x120ea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ea4: 0xc048502  jal         func_121408
    ctx->pc = 0x120EA4u;
    SET_GPR_U32(ctx, 31, 0x120EACu);
    ctx->pc = 0x120EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120EA4u;
            // 0x120ea8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120EACu; }
        if (ctx->pc != 0x120EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120EACu; }
        if (ctx->pc != 0x120EACu) { return; }
    }
    ctx->pc = 0x120EACu;
    // 0x120eac: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x120EACu;
    {
        const bool branch_taken_0x120eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120EACu;
            // 0x120eb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eac) {
            ctx->pc = 0x121200u;
            goto label_121200;
        }
    }
    ctx->pc = 0x120EB4u;
label_120eb4:
    // 0x120eb4: 0x1666003d  bne         $s3, $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x120EB4u;
    {
        const bool branch_taken_0x120eb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x120EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120EB4u;
            // 0x120eb8: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eb4) {
            ctx->pc = 0x120FACu;
            goto label_120fac;
        }
    }
    ctx->pc = 0x120EBCu;
    // 0x120ebc: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x120ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x120ec0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x120ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ec4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x120ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120ec8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x120ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x120ecc: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x120eccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x120ed0: 0xc048a6e  jal         func_1229B8
    ctx->pc = 0x120ED0u;
    SET_GPR_U32(ctx, 31, 0x120ED8u);
    ctx->pc = 0x120ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120ED0u;
            // 0x120ed4: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229B8u;
    if (runtime->hasFunction(0x1229B8u)) {
        auto targetFn = runtime->lookupFunction(0x1229B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120ED8u; }
        if (ctx->pc != 0x120ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x1229b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120ED8u; }
        if (ctx->pc != 0x120ED8u) { return; }
    }
    ctx->pc = 0x120ED8u;
    // 0x120ed8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x120ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x120edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ee0: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x120ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120ee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ee8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x120ee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x120eec: 0x8e041800  lw          $a0, 0x1800($s0)
    ctx->pc = 0x120eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x120ef0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ef8: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x120ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x120efc: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x120efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120f00: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x120f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x120f04: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x120f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f08: 0xc048502  jal         func_121408
    ctx->pc = 0x120F08u;
    SET_GPR_U32(ctx, 31, 0x120F10u);
    ctx->pc = 0x120F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120F08u;
            // 0x120f0c: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F10u; }
        if (ctx->pc != 0x120F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F10u; }
        if (ctx->pc != 0x120F10u) { return; }
    }
    ctx->pc = 0x120F10u;
    // 0x120f10: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x120f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x120f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120f18: 0x8e041800  lw          $a0, 0x1800($s0)
    ctx->pc = 0x120f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x120f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f20: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x120f20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120f24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120f2c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x120f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120f30: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x120f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x120f34: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x120f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f38: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x120f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x120f3c: 0xc048502  jal         func_121408
    ctx->pc = 0x120F3Cu;
    SET_GPR_U32(ctx, 31, 0x120F44u);
    ctx->pc = 0x120F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120F3Cu;
            // 0x120f40: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F44u; }
        if (ctx->pc != 0x120F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F44u; }
        if (ctx->pc != 0x120F44u) { return; }
    }
    ctx->pc = 0x120F44u;
    // 0x120f44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x120f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x120f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120f4c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x120f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120f50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120f54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x120f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x120f58: 0x8e041800  lw          $a0, 0x1800($s0)
    ctx->pc = 0x120f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x120f5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120f60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f64: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x120f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x120f68: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x120f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120f6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x120f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x120f70: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x120f70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f74: 0xc048502  jal         func_121408
    ctx->pc = 0x120F74u;
    SET_GPR_U32(ctx, 31, 0x120F7Cu);
    ctx->pc = 0x120F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120F74u;
            // 0x120f78: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F7Cu; }
        if (ctx->pc != 0x120F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F7Cu; }
        if (ctx->pc != 0x120F7Cu) { return; }
    }
    ctx->pc = 0x120F7Cu;
    // 0x120f7c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x120f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x120f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f84: 0x8e041800  lw          $a0, 0x1800($s0)
    ctx->pc = 0x120f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x120f88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120f8c: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x120f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x120f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120f98: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x120f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120f9c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x120f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x120fa0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x120fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fa4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x120FA4u;
    {
        const bool branch_taken_0x120fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120FA4u;
            // 0x120fa8: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fa4) {
            ctx->pc = 0x1211E0u;
            goto label_1211e0;
        }
    }
    ctx->pc = 0x120FACu;
label_120fac:
    // 0x120fac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fb0: 0xc047ffa  jal         func_11FFE8
    ctx->pc = 0x120FB0u;
    SET_GPR_U32(ctx, 31, 0x120FB8u);
    ctx->pc = 0x120FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120FB0u;
            // 0x120fb4: 0x24844e28  addiu       $a0, $a0, 0x4E28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFE8u;
    if (runtime->hasFunction(0x11FFE8u)) {
        auto targetFn = runtime->lookupFunction(0x11FFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120FB8u; }
        if (ctx->pc != 0x120FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120FB8u; }
        if (ctx->pc != 0x120FB8u) { return; }
    }
    ctx->pc = 0x120FB8u;
    // 0x120fb8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x120FB8u;
    {
        const bool branch_taken_0x120fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120FB8u;
            // 0x120fbc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fb8) {
            ctx->pc = 0x121200u;
            goto label_121200;
        }
    }
    ctx->pc = 0x120FC0u;
label_120fc0:
    // 0x120fc0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x120fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x120fc4: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x120fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x120fc8: 0x8c48180c  lw          $t0, 0x180C($v0)
    ctx->pc = 0x120fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6156)));
    // 0x120fcc: 0x8c671818  lw          $a3, 0x1818($v1)
    ctx->pc = 0x120fccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6168)));
    // 0x120fd0: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x120fd0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)2u)));
    // 0x120fd4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x120fd8: 0x8ca3181c  lw          $v1, 0x181C($a1)
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6172)));
    // 0x120fdc: 0x8c861810  lw          $a2, 0x1810($a0)
    ctx->pc = 0x120fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6160)));
    // 0x120fe0: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x120fe0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x120fe4: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x120fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x120fe8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x120fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120fec: 0x8ca2197c  lw          $v0, 0x197C($a1)
    ctx->pc = 0x120fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6524)));
    // 0x120ff0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x120ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ff4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x120ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x120ff8: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x120ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x120ffc: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x120ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x121000: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121000u;
    {
        const bool branch_taken_0x121000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x121004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121000u;
            // 0x121004: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121000) {
            ctx->pc = 0x121024u;
            goto label_121024;
        }
    }
    ctx->pc = 0x121008u;
    // 0x121008: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x121008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12100c: 0x8c43191c  lw          $v1, 0x191C($v0)
    ctx->pc = 0x12100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6428)));
    // 0x121010: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x121010u;
    {
        const bool branch_taken_0x121010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x121014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121010u;
            // 0x121014: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121010) {
            ctx->pc = 0x121028u;
            goto label_121028;
        }
    }
    ctx->pc = 0x121018u;
    // 0x121018: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x121018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12101c: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x12101cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x121020: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x121020u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_121024:
    // 0x121024: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x121024u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121028:
    // 0x121028: 0x527e0004  beql        $s3, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x121028u;
    {
        const bool branch_taken_0x121028 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        if (branch_taken_0x121028) {
            ctx->pc = 0x12102Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121028u;
            // 0x12102c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12103Cu;
            goto label_12103c;
        }
    }
    ctx->pc = 0x121030u;
    // 0x121030: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x121030u;
    {
        const bool branch_taken_0x121030 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x121034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121030u;
            // 0x121034: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121030) {
            ctx->pc = 0x121070u;
            goto label_121070;
        }
    }
    ctx->pc = 0x121038u;
    // 0x121038: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x121038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_12103c:
    // 0x12103c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x12103cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x121040: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x121040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x121044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121048: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x121048u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12104c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x121050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121054: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x121054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x121058: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x121058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12105c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x12105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x121060: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x121060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x121064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121068: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x121068u;
    {
        const bool branch_taken_0x121068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121068u;
            // 0x12106c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121068) {
            ctx->pc = 0x1211D4u;
            goto label_1211d4;
        }
    }
    ctx->pc = 0x121070u;
label_121070:
    // 0x121070: 0x16620031  bne         $s3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x121070u;
    {
        const bool branch_taken_0x121070 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x121074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121070u;
            // 0x121074: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121070) {
            ctx->pc = 0x121138u;
            goto label_121138;
        }
    }
    ctx->pc = 0x121078u;
    // 0x121078: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x121078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12107c: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x12107cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x121080: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x121080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x121084: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x121088: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x121088u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12108c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12108cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121090: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x121090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x121094: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x121094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x121098: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x121098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x12109c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1210a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1210a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1210a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1210a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1210ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1210acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210b0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1210b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1210b4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1210b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1210b8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1210b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210bc: 0xc048502  jal         func_121408
    ctx->pc = 0x1210BCu;
    SET_GPR_U32(ctx, 31, 0x1210C4u);
    ctx->pc = 0x1210C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1210BCu;
            // 0x1210c0: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210C4u; }
        if (ctx->pc != 0x1210C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1210C4u; }
        if (ctx->pc != 0x1210C4u) { return; }
    }
    ctx->pc = 0x1210C4u;
    // 0x1210c4: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1210c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1210c8: 0x8cc2197c  lw          $v0, 0x197C($a2)
    ctx->pc = 0x1210c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6524)));
    // 0x1210cc: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1210CCu;
    {
        const bool branch_taken_0x1210cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1210D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210CCu;
            // 0x1210d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210cc) {
            ctx->pc = 0x1210F4u;
            goto label_1210f4;
        }
    }
    ctx->pc = 0x1210D4u;
    // 0x1210d4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1210d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1210d8: 0x8c43191c  lw          $v1, 0x191C($v0)
    ctx->pc = 0x1210d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6428)));
    // 0x1210dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1210DCu;
    {
        const bool branch_taken_0x1210dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1210E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210DCu;
            // 0x1210e0: 0x8ec30008  lw          $v1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210dc) {
            ctx->pc = 0x1210F8u;
            goto label_1210f8;
        }
    }
    ctx->pc = 0x1210E4u;
    // 0x1210e4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x1210e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210e8: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x1210e8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 3)));
    // 0x1210ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1210ECu;
    {
        const bool branch_taken_0x1210ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1210F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210ECu;
            // 0x1210f0: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210ec) {
            ctx->pc = 0x1210F8u;
            goto label_1210f8;
        }
    }
    ctx->pc = 0x1210F4u;
label_1210f4:
    // 0x1210f4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x1210f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1210f8:
    // 0x1210f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1210f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1210fc: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1210fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x121100: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x121104: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x121108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x121108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12110c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12110cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121110: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x121110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x121114: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x121114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121118: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x121118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12111c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x12111cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121120: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x121120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x121124: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x121124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12112c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12112cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x121130: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x121130u;
    {
        const bool branch_taken_0x121130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121130u;
            // 0x121134: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121130) {
            ctx->pc = 0x1211E0u;
            goto label_1211e0;
        }
    }
    ctx->pc = 0x121138u;
label_121138:
    // 0x121138: 0x1662002d  bne         $s3, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x121138u;
    {
        const bool branch_taken_0x121138 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x12113Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121138u;
            // 0x12113c: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121138) {
            ctx->pc = 0x1211F0u;
            goto label_1211f0;
        }
    }
    ctx->pc = 0x121140u;
    // 0x121140: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x121140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x121144: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x121144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121148: 0x8c43191c  lw          $v1, 0x191C($v0)
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6428)));
    // 0x12114c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x12114cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121150: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x121150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121154: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x121154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x121158: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x121158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12115c: 0xc048a6e  jal         func_1229B8
    ctx->pc = 0x12115Cu;
    SET_GPR_U32(ctx, 31, 0x121164u);
    ctx->pc = 0x121160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12115Cu;
            // 0x121160: 0x3900a  movz        $s2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229B8u;
    if (runtime->hasFunction(0x1229B8u)) {
        auto targetFn = runtime->lookupFunction(0x1229B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121164u; }
        if (ctx->pc != 0x121164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x1229b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121164u; }
        if (ctx->pc != 0x121164u) { return; }
    }
    ctx->pc = 0x121164u;
    // 0x121164: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x121168: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x121168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x12116c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x121170: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x121170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x121174: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x121174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12117c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x12117cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121184: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x121184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x121188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12118c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12118cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x121190: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x121190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121194: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x121194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x121198: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x121198u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12119c: 0xc048502  jal         func_121408
    ctx->pc = 0x12119Cu;
    SET_GPR_U32(ctx, 31, 0x1211A4u);
    ctx->pc = 0x1211A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12119Cu;
            // 0x1211a0: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1211A4u; }
        if (ctx->pc != 0x1211A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1211A4u; }
        if (ctx->pc != 0x1211A4u) { return; }
    }
    ctx->pc = 0x1211A4u;
    // 0x1211a4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1211a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1211a8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1211a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1211ac: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1211acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1211b0: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x1211b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x1211b4: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1211b4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1211b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1211b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1211bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1211bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1211c0: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x1211c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1211c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1211c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1211c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1211c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1211ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1211d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1211d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1211d4:
    // 0x1211d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1211d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211d8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1211d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1211dc:
    // 0x1211dc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1211dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1211e0:
    // 0x1211e0: 0xc048502  jal         func_121408
    ctx->pc = 0x1211E0u;
    SET_GPR_U32(ctx, 31, 0x1211E8u);
    ctx->pc = 0x1211E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1211E0u;
            // 0x1211e4: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1211E8u; }
        if (ctx->pc != 0x1211E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1211E8u; }
        if (ctx->pc != 0x1211E8u) { return; }
    }
    ctx->pc = 0x1211E8u;
    // 0x1211e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1211E8u;
    {
        const bool branch_taken_0x1211e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1211E8u;
            // 0x1211ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211e8) {
            ctx->pc = 0x121200u;
            goto label_121200;
        }
    }
    ctx->pc = 0x1211F0u;
label_1211f0:
    // 0x1211f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1211f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211f4: 0xc047ffa  jal         func_11FFE8
    ctx->pc = 0x1211F4u;
    SET_GPR_U32(ctx, 31, 0x1211FCu);
    ctx->pc = 0x1211F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1211F4u;
            // 0x1211f8: 0x24844e48  addiu       $a0, $a0, 0x4E48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFE8u;
    if (runtime->hasFunction(0x11FFE8u)) {
        auto targetFn = runtime->lookupFunction(0x11FFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1211FCu; }
        if (ctx->pc != 0x1211FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1211FCu; }
        if (ctx->pc != 0x1211FCu) { return; }
    }
    ctx->pc = 0x1211FCu;
    // 0x1211fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121200:
    // 0x121200: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x121200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_121204:
    // 0x121204: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x121204u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x121208: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x121208u;
    {
        const bool branch_taken_0x121208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12120Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121208u;
            // 0x12120c: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121208) {
            ctx->pc = 0x1213D8u;
            goto label_1213d8;
        }
    }
    ctx->pc = 0x121210u;
    // 0x121210: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x121210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121214: 0x8c4319ac  lw          $v1, 0x19AC($v0)
    ctx->pc = 0x121214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x121218: 0x1464002b  bne         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x121218u;
    {
        const bool branch_taken_0x121218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12121Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121218u;
            // 0x12121c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121218) {
            ctx->pc = 0x1212C8u;
            goto label_1212c8;
        }
    }
    ctx->pc = 0x121220u;
    // 0x121220: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x121220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121224: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x121224u;
    {
        const bool branch_taken_0x121224 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x121228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121224u;
            // 0x121228: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121224) {
            ctx->pc = 0x12124Cu;
            goto label_12124c;
        }
    }
    ctx->pc = 0x12122Cu;
    // 0x12122c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x121230: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x121230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x121234: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x121234u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x121238: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x121238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12123c: 0x8c441804  lw          $a0, 0x1804($v0)
    ctx->pc = 0x12123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6148)));
    // 0x121240: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x121240u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121244: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x121244u;
    {
        const bool branch_taken_0x121244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121244u;
            // 0x121248: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121244) {
            ctx->pc = 0x121300u;
            goto label_121300;
        }
    }
    ctx->pc = 0x12124Cu;
label_12124c:
    // 0x12124c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x12124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x121250: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x121250u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x121254: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x121254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x121258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12125c: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x121260: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x121260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x121264: 0x8e041804  lw          $a0, 0x1804($s0)
    ctx->pc = 0x121264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6148)));
    // 0x121268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12126c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12126cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x121270: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x121270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121274: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x121274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x121278: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x121278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12127c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x12127cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x121280: 0xc048502  jal         func_121408
    ctx->pc = 0x121280u;
    SET_GPR_U32(ctx, 31, 0x121288u);
    ctx->pc = 0x121284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121280u;
            // 0x121284: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121288u; }
        if (ctx->pc != 0x121288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121288u; }
        if (ctx->pc != 0x121288u) { return; }
    }
    ctx->pc = 0x121288u;
    // 0x121288: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x121288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12128c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x12128cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121290: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x121290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x121294: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x121294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121298: 0x8e2b0018  lw          $t3, 0x18($s1)
    ctx->pc = 0x121298u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12129c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x12129cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1212a0: 0x8e041804  lw          $a0, 0x1804($s0)
    ctx->pc = 0x1212a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6148)));
    // 0x1212a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1212a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1212a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1212a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1212ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1212acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212b0: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1212b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1212b4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1212b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1212b8: 0xc048502  jal         func_121408
    ctx->pc = 0x1212B8u;
    SET_GPR_U32(ctx, 31, 0x1212C0u);
    ctx->pc = 0x1212BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1212B8u;
            // 0x1212bc: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212C0u; }
        if (ctx->pc != 0x1212C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212C0u; }
        if (ctx->pc != 0x1212C0u) { return; }
    }
    ctx->pc = 0x1212C0u;
    // 0x1212c0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1212C0u;
    {
        const bool branch_taken_0x1212c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212C0u;
            // 0x1212c4: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212c0) {
            ctx->pc = 0x1213DCu;
            goto label_1213dc;
        }
    }
    ctx->pc = 0x1212C8u;
label_1212c8:
    // 0x1212c8: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1212C8u;
    {
        const bool branch_taken_0x1212c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1212CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212C8u;
            // 0x1212cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212c8) {
            ctx->pc = 0x121324u;
            goto label_121324;
        }
    }
    ctx->pc = 0x1212D0u;
    // 0x1212d0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1212d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1212d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1212D4u;
    {
        const bool branch_taken_0x1212d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212D4u;
            // 0x1212d8: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212d4) {
            ctx->pc = 0x1212E4u;
            goto label_1212e4;
        }
    }
    ctx->pc = 0x1212DCu;
    // 0x1212dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1212DCu;
    {
        const bool branch_taken_0x1212dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212DCu;
            // 0x1212e0: 0x8c44181c  lw          $a0, 0x181C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212dc) {
            ctx->pc = 0x1212ECu;
            goto label_1212ec;
        }
    }
    ctx->pc = 0x1212E4u;
label_1212e4:
    // 0x1212e4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1212e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1212e8: 0x8c441810  lw          $a0, 0x1810($v0)
    ctx->pc = 0x1212e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
label_1212ec:
    // 0x1212ec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1212ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1212f0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1212f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212f4: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x1212f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1212f8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1212f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1212fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_121300:
    // 0x121300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121304: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x121304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x121308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12130c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12130cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x121310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121314: 0xc048502  jal         func_121408
    ctx->pc = 0x121314u;
    SET_GPR_U32(ctx, 31, 0x12131Cu);
    ctx->pc = 0x121318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121314u;
            // 0x121318: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12131Cu; }
        if (ctx->pc != 0x12131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12131Cu; }
        if (ctx->pc != 0x12131Cu) { return; }
    }
    ctx->pc = 0x12131Cu;
    // 0x12131c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x12131Cu;
    {
        const bool branch_taken_0x12131c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12131Cu;
            // 0x121320: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12131c) {
            ctx->pc = 0x1213DCu;
            goto label_1213dc;
        }
    }
    ctx->pc = 0x121324u;
label_121324:
    // 0x121324: 0x16620029  bne         $s3, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x121324u;
    {
        const bool branch_taken_0x121324 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x121328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121324u;
            // 0x121328: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121324) {
            ctx->pc = 0x1213CCu;
            goto label_1213cc;
        }
    }
    ctx->pc = 0x12132Cu;
    // 0x12132c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x12132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x121330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121330u;
    {
        const bool branch_taken_0x121330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121330u;
            // 0x121334: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121330) {
            ctx->pc = 0x121340u;
            goto label_121340;
        }
    }
    ctx->pc = 0x121338u;
    // 0x121338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121338u;
    {
        const bool branch_taken_0x121338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121338u;
            // 0x12133c: 0x8c44181c  lw          $a0, 0x181C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121338) {
            ctx->pc = 0x121348u;
            goto label_121348;
        }
    }
    ctx->pc = 0x121340u;
label_121340:
    // 0x121340: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x121340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x121344: 0x8c441810  lw          $a0, 0x1810($v0)
    ctx->pc = 0x121344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
label_121348:
    // 0x121348: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x121348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12134c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12134cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121350: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x121350u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x121354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121358: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x121358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12135c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12135cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121360: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x121360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x121364: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x121364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121368: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x121368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x12136c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x12136cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121370: 0xc048502  jal         func_121408
    ctx->pc = 0x121370u;
    SET_GPR_U32(ctx, 31, 0x121378u);
    ctx->pc = 0x121374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121370u;
            // 0x121374: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121378u; }
        if (ctx->pc != 0x121378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121378u; }
        if (ctx->pc != 0x121378u) { return; }
    }
    ctx->pc = 0x121378u;
    // 0x121378: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x121378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x12137c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12137Cu;
    {
        const bool branch_taken_0x12137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12137Cu;
            // 0x121380: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12137c) {
            ctx->pc = 0x12138Cu;
            goto label_12138c;
        }
    }
    ctx->pc = 0x121384u;
    // 0x121384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121384u;
    {
        const bool branch_taken_0x121384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121384u;
            // 0x121388: 0x8c44181c  lw          $a0, 0x181C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121384) {
            ctx->pc = 0x121394u;
            goto label_121394;
        }
    }
    ctx->pc = 0x12138Cu;
label_12138c:
    // 0x12138c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x121390: 0x8c441810  lw          $a0, 0x1810($v0)
    ctx->pc = 0x121390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
label_121394:
    // 0x121394: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x121394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x121398: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x121398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12139c: 0x8e2b0018  lw          $t3, 0x18($s1)
    ctx->pc = 0x12139cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1213a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1213a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1213a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1213a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1213a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213ac: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1213acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1213b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1213b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1213b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1213b8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1213bc: 0xc048502  jal         func_121408
    ctx->pc = 0x1213BCu;
    SET_GPR_U32(ctx, 31, 0x1213C4u);
    ctx->pc = 0x1213C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1213BCu;
            // 0x1213c0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121408u;
    if (runtime->hasFunction(0x121408u)) {
        auto targetFn = runtime->lookupFunction(0x121408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213C4u; }
        if (ctx->pc != 0x1213C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x121408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213C4u; }
        if (ctx->pc != 0x1213C4u) { return; }
    }
    ctx->pc = 0x1213C4u;
    // 0x1213c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1213C4u;
    {
        const bool branch_taken_0x1213c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1213C4u;
            // 0x1213c8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213c4) {
            ctx->pc = 0x1213DCu;
            goto label_1213dc;
        }
    }
    ctx->pc = 0x1213CCu;
label_1213cc:
    // 0x1213cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1213ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213d0: 0xc047ffa  jal         func_11FFE8
    ctx->pc = 0x1213D0u;
    SET_GPR_U32(ctx, 31, 0x1213D8u);
    ctx->pc = 0x1213D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1213D0u;
            // 0x1213d4: 0x24844e68  addiu       $a0, $a0, 0x4E68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFE8u;
    if (runtime->hasFunction(0x11FFE8u)) {
        auto targetFn = runtime->lookupFunction(0x11FFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213D8u; }
        if (ctx->pc != 0x1213D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213D8u; }
        if (ctx->pc != 0x1213D8u) { return; }
    }
    ctx->pc = 0x1213D8u;
label_1213d8:
    // 0x1213d8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1213d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1213dc:
    // 0x1213dc: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1213dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1213e0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1213e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1213e4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1213e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1213e8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1213e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1213ec: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1213ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1213f0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1213f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1213f4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1213f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1213f8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1213f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1213fc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1213fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x121400: 0x3e00008  jr          $ra
    ctx->pc = 0x121400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121400u;
            // 0x121404: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120DDCu: goto label_120ddc;
            case 0x120E08u: goto label_120e08;
            case 0x120E34u: goto label_120e34;
            case 0x120EB4u: goto label_120eb4;
            case 0x120FACu: goto label_120fac;
            case 0x120FC0u: goto label_120fc0;
            case 0x121024u: goto label_121024;
            case 0x121028u: goto label_121028;
            case 0x12103Cu: goto label_12103c;
            case 0x121070u: goto label_121070;
            case 0x1210F4u: goto label_1210f4;
            case 0x1210F8u: goto label_1210f8;
            case 0x121138u: goto label_121138;
            case 0x1211D4u: goto label_1211d4;
            case 0x1211DCu: goto label_1211dc;
            case 0x1211E0u: goto label_1211e0;
            case 0x1211F0u: goto label_1211f0;
            case 0x121200u: goto label_121200;
            case 0x121204u: goto label_121204;
            case 0x12124Cu: goto label_12124c;
            case 0x1212C8u: goto label_1212c8;
            case 0x1212E4u: goto label_1212e4;
            case 0x1212ECu: goto label_1212ec;
            case 0x121300u: goto label_121300;
            case 0x121324u: goto label_121324;
            case 0x121340u: goto label_121340;
            case 0x121348u: goto label_121348;
            case 0x12138Cu: goto label_12138c;
            case 0x121394u: goto label_121394;
            case 0x1213CCu: goto label_1213cc;
            case 0x1213D8u: goto label_1213d8;
            case 0x1213DCu: goto label_1213dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121408u;
}
