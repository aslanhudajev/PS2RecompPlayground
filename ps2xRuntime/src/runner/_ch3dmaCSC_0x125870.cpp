#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ch3dmaCSC
// Address: 0x125870 - 0x1259b8
void _ch3dmaCSC_0x125870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125870u;

    // 0x125870: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125874: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x125874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125878: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x125878u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x12587c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x12587cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x125880: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x125880u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125884: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x125888: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x125888u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45088u)));
    // 0x12588c: 0x8ca221c0  lw          $v0, 0x21C0($a1)
    ctx->pc = 0x12588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x125890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125894: 0xaca221c0  sw          $v0, 0x21C0($a1)
    ctx->pc = 0x125894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8640), GPR_U32(ctx, 2));
    // 0x125898: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x12589c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12589Cu;
    {
        const bool branch_taken_0x12589c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1258A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12589Cu;
            // 0x1258a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12589c) {
            ctx->pc = 0x1258BCu;
            goto label_1258bc;
        }
    }
    ctx->pc = 0x1258A4u;
    // 0x1258a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1258a8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1258a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45056u)));
    // 0x1258ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1258acu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1258b0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1258b0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)256u)));
    // 0x1258b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1258B4u;
    {
        const bool branch_taken_0x1258b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258B4u;
            // 0x1258b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258b4) {
            ctx->pc = 0x1258CCu;
            goto label_1258cc;
        }
    }
    ctx->pc = 0x1258BCu;
label_1258bc:
    // 0x1258bc: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x1258bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x1258c0: 0xac6221b8  sw          $v0, 0x21B8($v1)
    ctx->pc = 0x1258c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8632), GPR_U32(ctx, 2));
    // 0x1258c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1258C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1258C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258C4u;
            // 0x1258c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1258BCu: goto label_1258bc;
            case 0x1258CCu: goto label_1258cc;
            case 0x125944u: goto label_125944;
            case 0x1259A8u: goto label_1259a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1258CCu;
label_1258cc:
    // 0x1258cc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x1258ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x1258d0: 0x8ca321c0  lw          $v1, 0x21C0($a1)
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x1258d4: 0x8c44e4d8  lw          $a0, -0x1B28($v0)
    ctx->pc = 0x1258d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960344)));
    // 0x1258d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1258dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1258dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1258e0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1258E0u;
    {
        const bool branch_taken_0x1258e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258E0u;
            // 0x1258e4: 0x3c080075  lui         $t0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258e0) {
            ctx->pc = 0x125944u;
            goto label_125944;
        }
    }
    ctx->pc = 0x1258E8u;
    // 0x1258e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1258ec: 0x8d06e4d4  lw          $a2, -0x1B2C($t0)
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960340)));
    // 0x1258f0: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1258f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45072u)));
    // 0x1258f4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1258f4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x1258f8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1258fc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1258fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x125900: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x125904: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x125904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x125908: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x125908u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x12590c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12590cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x125910: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x125910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x125914: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x125914u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64512u)));
    // 0x125918: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12591c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x12591cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x125920: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x125924: 0xac27b000  sw          $a3, -0x5000($at)
    ctx->pc = 0x125924u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 7)); // MMIO: 0x1000b000
    // 0x125928: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x125928u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
    // 0x12592c: 0x348403ff  ori         $a0, $a0, 0x3FF
    ctx->pc = 0x12592cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1023u)));
    // 0x125930: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125930u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x125934: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x125934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x125938: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x125938u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x12593c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12593Cu;
    {
        const bool branch_taken_0x12593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12593Cu;
            // 0x125940: 0xad06e4d4  sw          $a2, -0x1B2C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294960340), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12593c) {
            ctx->pc = 0x1259A8u;
            goto label_1259a8;
        }
    }
    ctx->pc = 0x125944u;
label_125944:
    // 0x125944: 0x8ca221c0  lw          $v0, 0x21C0($a1)
    ctx->pc = 0x125944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x125948: 0x14440017  bne         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x125948u;
    {
        const bool branch_taken_0x125948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x12594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125948u;
            // 0x12594c: 0x3c030075  lui         $v1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125948) {
            ctx->pc = 0x1259A8u;
            goto label_1259a8;
        }
    }
    ctx->pc = 0x125950u;
    // 0x125950: 0x8ca521c0  lw          $a1, 0x21C0($a1)
    ctx->pc = 0x125950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8640)));
    // 0x125954: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x125954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x125958: 0x8cc4e4d0  lw          $a0, -0x1B30($a2)
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960336)));
    // 0x12595c: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x125960: 0x8c67e4d4  lw          $a3, -0x1B2C($v1)
    ctx->pc = 0x125960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960340)));
    // 0x125964: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x125964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x125968: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12596c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x12596cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x125970: 0x3463b010  ori         $v1, $v1, 0xB010
    ctx->pc = 0x125970u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45072u)));
    // 0x125974: 0xacc4e4d0  sw          $a0, -0x1B30($a2)
    ctx->pc = 0x125974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960336), GPR_U32(ctx, 4));
    // 0x125978: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x12597c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x12597cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x125980: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x125980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x125984: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x125988: 0xac25b020  sw          $a1, -0x4FE0($at)
    ctx->pc = 0x125988u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 5)); // MMIO: 0x1000b020
    // 0x12598c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125990: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x125994: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x125994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x125998: 0xac26b000  sw          $a2, -0x5000($at)
    ctx->pc = 0x125998u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 6)); // MMIO: 0x1000b000
    // 0x12599c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x12599cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1259a0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1259a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x1259a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1259a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1259a8:
    // 0x1259a8: 0xf  sync
    ctx->pc = 0x1259a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1259ac: 0x42000038  ei
    ctx->pc = 0x1259acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1259b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1259B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1259B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259B0u;
            // 0x1259b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1258BCu: goto label_1258bc;
            case 0x1258CCu: goto label_1258cc;
            case 0x125944u: goto label_125944;
            case 0x1259A8u: goto label_1259a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1259B8u;
}
