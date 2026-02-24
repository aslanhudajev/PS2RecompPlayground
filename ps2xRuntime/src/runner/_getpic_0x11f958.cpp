#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _getpic
// Address: 0x11f958 - 0x11fadc
void _getpic_0x11f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_getpic_0x11f958");
#endif

    ctx->pc = 0x11f958u;

    // 0x11f958: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11f958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11f95c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11f95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11f960: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11f960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11f964: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11f964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f968: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11f96c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11f96cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f970: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11f974: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11f974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f978: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11f978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11f97c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f980: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f988: 0x8e700040  lw          $s0, 0x40($s3)
    ctx->pc = 0x11f988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x11f98c: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x11f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x11f990: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x11f990u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)63u)));
    // 0x11f994: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F994u;
    {
        const bool branch_taken_0x11f994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F994u;
            // 0x11f998: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f994) {
            ctx->pc = 0x11F9B0u;
            goto label_11f9b0;
        }
    }
    ctx->pc = 0x11F99Cu;
    // 0x11f99c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x11f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x11f9a0: 0xc047ffa  jal         func_11FFE8
    ctx->pc = 0x11F9A0u;
    SET_GPR_U32(ctx, 31, 0x11F9A8u);
    ctx->pc = 0x11F9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9A0u;
            // 0x11f9a4: 0x24844c58  addiu       $a0, $a0, 0x4C58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFE8u;
    if (runtime->hasFunction(0x11FFE8u)) {
        auto targetFn = runtime->lookupFunction(0x11FFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9A8u; }
        if (ctx->pc != 0x11F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9A8u; }
        if (ctx->pc != 0x11F9A8u) { return; }
    }
    ctx->pc = 0x11F9A8u;
    // 0x11f9a8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x11F9A8u;
    {
        const bool branch_taken_0x11f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9A8u;
            // 0x11f9ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9a8) {
            ctx->pc = 0x11FAB4u;
            goto label_11fab4;
        }
    }
    ctx->pc = 0x11F9B0u;
label_11f9b0:
    // 0x11f9b0: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x11f9b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x11f9b4: 0xaec02080  sw          $zero, 0x2080($s6)
    ctx->pc = 0x11f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8320), GPR_U32(ctx, 0));
    // 0x11f9b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f9bc: 0x0  nop
    ctx->pc = 0x11f9bcu;
    // NOP
label_11f9c0:
    // 0x11f9c0: 0x1282000e  beq         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11F9C0u;
    {
        const bool branch_taken_0x11f9c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9C0u;
            // 0x11f9c4: 0x2ea20005  sltiu       $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9c0) {
            ctx->pc = 0x11F9FCu;
            goto label_11f9fc;
        }
    }
    ctx->pc = 0x11F9C8u;
    // 0x11f9c8: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x11f9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x11f9cc: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x11f9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
label_11f9d0:
    // 0x11f9d0: 0xc04906c  jal         func_1241B0
    ctx->pc = 0x11F9D0u;
    SET_GPR_U32(ctx, 31, 0x11F9D8u);
    ctx->pc = 0x1241B0u;
    if (runtime->hasFunction(0x1241B0u)) {
        auto targetFn = runtime->lookupFunction(0x1241B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9D8u; }
        if (ctx->pc != 0x11F9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x1241b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9D8u; }
        if (ctx->pc != 0x11F9D8u) { return; }
    }
    ctx->pc = 0x11F9D8u;
    // 0x11f9d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11f9d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f9dc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F9DCu;
    {
        const bool branch_taken_0x11f9dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9DCu;
            // 0x11f9e0: 0x8e4319ac  lw          $v1, 0x19AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9dc) {
            ctx->pc = 0x11F9F8u;
            goto label_11f9f8;
        }
    }
    ctx->pc = 0x11F9E4u;
    // 0x11f9e4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x11f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x11f9e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F9E8u;
    {
        const bool branch_taken_0x11f9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9E8u;
            // 0x11f9ec: 0x8e2220b0  lw          $v0, 0x20B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9e8) {
            ctx->pc = 0x11F9F8u;
            goto label_11f9f8;
        }
    }
    ctx->pc = 0x11F9F0u;
    // 0x11f9f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F9F0u;
    {
        const bool branch_taken_0x11f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f9f0) {
            ctx->pc = 0x11F9D0u;
            goto label_11f9d0;
        }
    }
    ctx->pc = 0x11F9F8u;
label_11f9f8:
    // 0x11f9f8: 0x2ea20005  sltiu       $v0, $s5, 0x5
    ctx->pc = 0x11f9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_11f9fc:
    // 0x11f9fc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11F9FCu;
    {
        const bool branch_taken_0x11f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9FCu;
            // 0x11fa00: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9fc) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA04u;
    // 0x11fa04: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x11fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x11fa08: 0x24424ca0  addiu       $v0, $v0, 0x4CA0
    ctx->pc = 0x11fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19616));
    // 0x11fa0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11fa10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11fa14: 0x800008  jr          $a0
    ctx->pc = 0x11FA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FA1Cu: goto label_11fa1c;
            case 0x11FA30u: goto label_11fa30;
            case 0x11FA60u: goto label_11fa60;
            case 0x11FA84u: goto label_11fa84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FA1Cu;
label_11fa1c:
    // 0x11fa1c: 0xc047f6e  jal         func_11FDB8
    ctx->pc = 0x11FA1Cu;
    SET_GPR_U32(ctx, 31, 0x11FA24u);
    ctx->pc = 0x11FA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA1Cu;
            // 0x11fa20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FDB8u;
    if (runtime->hasFunction(0x11FDB8u)) {
        auto targetFn = runtime->lookupFunction(0x11FDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA24u; }
        if (ctx->pc != 0x11FA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x11fdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA24u; }
        if (ctx->pc != 0x11FA24u) { return; }
    }
    ctx->pc = 0x11FA24u;
    // 0x11fa24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fa28: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11FA28u;
    {
        const bool branch_taken_0x11fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA28u;
            // 0x11fa2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa28) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA30u;
label_11fa30:
    // 0x11fa30: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x11fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x11fa34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa38: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x11fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x11fa3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa40: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x11fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x11fa44: 0xc047f02  jal         func_11FC08
    ctx->pc = 0x11FA44u;
    SET_GPR_U32(ctx, 31, 0x11FA4Cu);
    ctx->pc = 0x11FA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA44u;
            // 0x11fa48: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC08u;
    if (runtime->hasFunction(0x11FC08u)) {
        auto targetFn = runtime->lookupFunction(0x11FC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA4Cu; }
        if (ctx->pc != 0x11FA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x11fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA4Cu; }
        if (ctx->pc != 0x11FA4Cu) { return; }
    }
    ctx->pc = 0x11FA4Cu;
    // 0x11fa4c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x11fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x11fa50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11fa50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11fa58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11FA58u;
    {
        const bool branch_taken_0x11fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA58u;
            // 0x11fa5c: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa58) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA60u;
label_11fa60:
    // 0x11fa60: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x11fa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x11fa64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11fa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa68: 0xc047f02  jal         func_11FC08
    ctx->pc = 0x11FA68u;
    SET_GPR_U32(ctx, 31, 0x11FA70u);
    ctx->pc = 0x11FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA68u;
            // 0x11fa6c: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC08u;
    if (runtime->hasFunction(0x11FC08u)) {
        auto targetFn = runtime->lookupFunction(0x11FC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA70u; }
        if (ctx->pc != 0x11FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x11fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA70u; }
        if (ctx->pc != 0x11FA70u) { return; }
    }
    ctx->pc = 0x11FA70u;
    // 0x11fa70: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x11fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x11fa74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11fa74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11fa7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11FA7Cu;
    {
        const bool branch_taken_0x11fa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA7Cu;
            // 0x11fa80: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa7c) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA84u;
label_11fa84:
    // 0x11fa84: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x11fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x11fa88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11fa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa8c: 0xc047f02  jal         func_11FC08
    ctx->pc = 0x11FA8Cu;
    SET_GPR_U32(ctx, 31, 0x11FA94u);
    ctx->pc = 0x11FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA8Cu;
            // 0x11fa90: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC08u;
    if (runtime->hasFunction(0x11FC08u)) {
        auto targetFn = runtime->lookupFunction(0x11FC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA94u; }
        if (ctx->pc != 0x11FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x11fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA94u; }
        if (ctx->pc != 0x11FA94u) { return; }
    }
    ctx->pc = 0x11FA94u;
    // 0x11fa94: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x11fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x11fa98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11fa98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11faa0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x11faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_11faa4:
    // 0x11faa4: 0x8ec22080  lw          $v0, 0x2080($s6)
    ctx->pc = 0x11faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8320)));
    // 0x11faa8: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x11FAA8u;
    {
        const bool branch_taken_0x11faa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FAA8u;
            // 0x11faac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faa8) {
            ctx->pc = 0x11F9C0u;
            goto label_11f9c0;
        }
    }
    ctx->pc = 0x11FAB0u;
    // 0x11fab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11fab4:
    // 0x11fab4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11fab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11fab8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11fab8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11fabc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11fabcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fac0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11fac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fac4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11fac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fac8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11fac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11facc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11faccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fad4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FAD4u;
            // 0x11fad8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F9B0u: goto label_11f9b0;
            case 0x11F9C0u: goto label_11f9c0;
            case 0x11F9D0u: goto label_11f9d0;
            case 0x11F9F8u: goto label_11f9f8;
            case 0x11F9FCu: goto label_11f9fc;
            case 0x11FA1Cu: goto label_11fa1c;
            case 0x11FA30u: goto label_11fa30;
            case 0x11FA60u: goto label_11fa60;
            case 0x11FA84u: goto label_11fa84;
            case 0x11FAA4u: goto label_11faa4;
            case 0x11FAB4u: goto label_11fab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FADCu;
}
