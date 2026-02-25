#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _request_rdata
// Address: 0x1318c0 - 0x131990
void _request_rdata_0x1318c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_request_rdata_0x1318c0");
#endif

    ctx->pc = 0x1318c0u;

    // 0x1318c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1318c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1318c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1318c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1318c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1318c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1318ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1318d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1318d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1318d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1318d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318d8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1318d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1318dc: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1318dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4u)));
    // 0x1318e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1318E0u;
    {
        const bool branch_taken_0x1318e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318e0) {
            ctx->pc = 0x1318F8u;
            goto label_1318f8;
        }
    }
    ctx->pc = 0x1318E8u;
    // 0x1318e8: 0xc04c5da  jal         func_131768
    ctx->pc = 0x1318E8u;
    SET_GPR_U32(ctx, 31, 0x1318F0u);
    ctx->pc = 0x1318ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318E8u;
            // 0x1318ec: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131768u;
    if (runtime->hasFunction(0x131768u)) {
        auto targetFn = runtime->lookupFunction(0x131768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318F0u; }
        if (ctx->pc != 0x1318F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket2_0x131768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1318F0u; }
        if (ctx->pc != 0x1318F0u) { return; }
    }
    ctx->pc = 0x1318F0u;
    // 0x1318f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1318F0u;
    {
        const bool branch_taken_0x1318f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1318F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1318F0u;
            // 0x1318f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318f0) {
            ctx->pc = 0x131904u;
            goto label_131904;
        }
    }
    ctx->pc = 0x1318F8u;
label_1318f8:
    // 0x1318f8: 0xc04c5ce  jal         func_131738
    ctx->pc = 0x1318F8u;
    SET_GPR_U32(ctx, 31, 0x131900u);
    ctx->pc = 0x131738u;
    if (runtime->hasFunction(0x131738u)) {
        auto targetFn = runtime->lookupFunction(0x131738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131900u; }
        if (ctx->pc != 0x131900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x131738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131900u; }
        if (ctx->pc != 0x131900u) { return; }
    }
    ctx->pc = 0x131900u;
    // 0x131900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131904:
    // 0x131904: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x131904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x131908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x131908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13190c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x13190cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x131910: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x131910u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)12u)));
    // 0x131914: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x131914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x131918: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x131918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13191c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x13191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x131920: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x131920u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8u)));
    // 0x131924: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x131924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x131928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13192c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x13192cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x131930: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x131930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x131934: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x131934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x131938: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x131938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13193c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x13193cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x131940: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x131944: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x131944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x131948: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x131948u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x13194c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x13194cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x131950: 0xc04c4a4  jal         func_131290
    ctx->pc = 0x131950u;
    SET_GPR_U32(ctx, 31, 0x131958u);
    ctx->pc = 0x131954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131950u;
            // 0x131954: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131290u;
    if (runtime->hasFunction(0x131290u)) {
        auto targetFn = runtime->lookupFunction(0x131290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131958u; }
        if (ctx->pc != 0x131958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isceSifSendCmd_0x131290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131958u; }
        if (ctx->pc != 0x131958u) { return; }
    }
    ctx->pc = 0x131958u;
    // 0x131958: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x131958u;
    {
        const bool branch_taken_0x131958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131958u;
            // 0x13195c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131958) {
            ctx->pc = 0x131980u;
            goto label_131980;
        }
    }
    ctx->pc = 0x131960u;
    // 0x131960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x131960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131964: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x131964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x131968: 0x24a51860  addiu       $a1, $a1, 0x1860
    ctx->pc = 0x131968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6240));
    // 0x13196c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13196cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131970: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x131970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x131974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131978: 0x804ba90  j           func_12EA40
    ctx->pc = 0x131978u;
    ctx->pc = 0x13197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131978u;
            // 0x13197c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA40u;
    if (runtime->hasFunction(0x12EA40u)) {
        auto targetFn = runtime->lookupFunction(0x12EA40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        iSetAlarm_0x12ea40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131980u;
label_131980:
    // 0x131980: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x131980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131988: 0x3e00008  jr          $ra
    ctx->pc = 0x131988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131988u;
            // 0x13198c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1318F8u: goto label_1318f8;
            case 0x131904u: goto label_131904;
            case 0x131980u: goto label_131980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131990u;
}
