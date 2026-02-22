#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureDisplayExtension
// Address: 0x124938 - 0x124a28
void _pictureDisplayExtension_0x124938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124938u;

    // 0x124938: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12493c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12493cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x124940: 0x8c431948  lw          $v1, 0x1948($v0)
    ctx->pc = 0x124940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6472)));
    // 0x124944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x124944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x124948: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x124948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12494c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12494cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x124950: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124954: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x124954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x124958: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x124958u;
    {
        const bool branch_taken_0x124958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124958u;
            // 0x12495c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124958) {
            ctx->pc = 0x124984u;
            goto label_124984;
        }
    }
    ctx->pc = 0x124960u;
    // 0x124960: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124964: 0x8c4319c0  lw          $v1, 0x19C0($v0)
    ctx->pc = 0x124964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6592)));
    // 0x124968: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x124968u;
    {
        const bool branch_taken_0x124968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12496Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124968u;
            // 0x12496c: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124968) {
            ctx->pc = 0x124998u;
            goto label_124998;
        }
    }
    ctx->pc = 0x124970u;
    // 0x124970: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x124970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124974: 0x8c4419b0  lw          $a0, 0x19B0($v0)
    ctx->pc = 0x124974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6576)));
    // 0x124978: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x124978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12497c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12497Cu;
    {
        const bool branch_taken_0x12497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12497Cu;
            // 0x124980: 0x64900b  movn        $s2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12497c) {
            ctx->pc = 0x1249ACu;
            goto label_1249ac;
        }
    }
    ctx->pc = 0x124984u;
label_124984:
    // 0x124984: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124988: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12498c: 0x8c4419ac  lw          $a0, 0x19AC($v0)
    ctx->pc = 0x12498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x124990: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x124990u;
    {
        const bool branch_taken_0x124990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x124994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124990u;
            // 0x124994: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124990) {
            ctx->pc = 0x1249A0u;
            goto label_1249a0;
        }
    }
    ctx->pc = 0x124998u;
label_124998:
    // 0x124998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124998u;
    {
        const bool branch_taken_0x124998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124998u;
            // 0x12499c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124998) {
            ctx->pc = 0x1249ACu;
            goto label_1249ac;
        }
    }
    ctx->pc = 0x1249A0u;
label_1249a0:
    // 0x1249a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1249a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1249a4: 0x8c6219c0  lw          $v0, 0x19C0($v1)
    ctx->pc = 0x1249a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6592)));
    // 0x1249a8: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x1249a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_1249ac:
    // 0x1249ac: 0x1a400016  blez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1249ACu;
    {
        const bool branch_taken_0x1249ac = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1249B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249ACu;
            // 0x1249b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249ac) {
            ctx->pc = 0x124A08u;
            goto label_124a08;
        }
    }
    ctx->pc = 0x1249B4u;
    // 0x1249b4: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x1249b8: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x1249b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x1249bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1249bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1249c0:
    // 0x1249c0: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1249C0u;
    SET_GPR_U32(ctx, 31, 0x1249C8u);
    ctx->pc = 0x1249C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249C0u;
            // 0x1249c4: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249C8u; }
        if (ctx->pc != 0x1249C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249C8u; }
        if (ctx->pc != 0x1249C8u) { return; }
    }
    ctx->pc = 0x1249C8u;
    // 0x1249c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1249c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1249cc: 0x268319e8  addiu       $v1, $s4, 0x19E8
    ctx->pc = 0x1249ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6632));
    // 0x1249d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1249d4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1249d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1249d8: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1249D8u;
    SET_GPR_U32(ctx, 31, 0x1249E0u);
    ctx->pc = 0x1249DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249D8u;
            // 0x1249dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E0u; }
        if (ctx->pc != 0x1249E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E0u; }
        if (ctx->pc != 0x1249E0u) { return; }
    }
    ctx->pc = 0x1249E0u;
    // 0x1249e0: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1249E0u;
    SET_GPR_U32(ctx, 31, 0x1249E8u);
    ctx->pc = 0x1249E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249E0u;
            // 0x1249e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E8u; }
        if (ctx->pc != 0x1249E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E8u; }
        if (ctx->pc != 0x1249E8u) { return; }
    }
    ctx->pc = 0x1249E8u;
    // 0x1249e8: 0x266319f8  addiu       $v1, $s3, 0x19F8
    ctx->pc = 0x1249e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 6648));
    // 0x1249ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1249f0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1249f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1249f4: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1249F4u;
    SET_GPR_U32(ctx, 31, 0x1249FCu);
    ctx->pc = 0x1249F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249F4u;
            // 0x1249f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249FCu; }
        if (ctx->pc != 0x1249FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249FCu; }
        if (ctx->pc != 0x1249FCu) { return; }
    }
    ctx->pc = 0x1249FCu;
    // 0x1249fc: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1249fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x124a00: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x124A00u;
    {
        const bool branch_taken_0x124a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A00u;
            // 0x124a04: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a00) {
            ctx->pc = 0x1249C0u;
            goto label_1249c0;
        }
    }
    ctx->pc = 0x124A08u;
label_124a08:
    // 0x124a08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x124a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124a0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x124a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124a10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x124a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124a14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124a18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x124a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124a20: 0x3e00008  jr          $ra
    ctx->pc = 0x124A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A20u;
            // 0x124a24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124984u: goto label_124984;
            case 0x124998u: goto label_124998;
            case 0x1249A0u: goto label_1249a0;
            case 0x1249ACu: goto label_1249ac;
            case 0x1249C0u: goto label_1249c0;
            case 0x124A08u: goto label_124a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124A28u;
}
