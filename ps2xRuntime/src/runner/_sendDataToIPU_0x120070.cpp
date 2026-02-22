#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sendDataToIPU
// Address: 0x120070 - 0x120144
void _sendDataToIPU_0x120070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120070u;

    // 0x120070: 0x3c0f0075  lui         $t7, 0x75
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)117 << 16));
    // 0x120074: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x120078: 0x25e3dcc0  addiu       $v1, $t7, -0x2340
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294958272));
    // 0x12007c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12007cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x120080: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x120080u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120084: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x120084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x120088: 0x665825  or          $t3, $v1, $a2
    ctx->pc = 0x120088u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x12008c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x12008cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120090: 0x1900001d  blez        $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x120090u;
    {
        const bool branch_taken_0x120090 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x120094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120090u;
            // 0x120094: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120090) {
            ctx->pc = 0x120108u;
            goto label_120108;
        }
    }
    ctx->pc = 0x120098u;
    // 0x120098: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x120098u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x12009c: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x12009cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x1200a0: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x1200a0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65344u)));
    // 0x1200a4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1200a4u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), _mm_cvtsi32_si128((int)65535u)));
    // 0x1200a8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1200a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1200ac: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1200acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1200b0:
    // 0x1200b0: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x1200b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1200b4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1200b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b8: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x1200b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1200bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1200bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200c0: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x1200c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1200c4: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x1200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x1200c8: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x1200c8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1200cc: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1200ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1200d0: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1200d0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1200d4: 0x14c2024  and         $a0, $t2, $t4
    ctx->pc = 0x1200d4u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 12)));
    // 0x1200d8: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x1200d8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x1200dc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1200dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1200e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1200e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1200e4: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x1200e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1200e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1200e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1200ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1200ecu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1200f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1200f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1200f4: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1200f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1200f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1200f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1200fc: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x1200fcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x120100: 0x1d00ffeb  bgtz        $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x120100u;
    {
        const bool branch_taken_0x120100 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x120104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120100u;
            // 0x120104: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120100) {
            ctx->pc = 0x1200B0u;
            goto label_1200b0;
        }
    }
    ctx->pc = 0x120108u;
label_120108:
    // 0x120108: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x120108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12010c: 0x25e4dcc0  addiu       $a0, $t7, -0x2340
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294958272));
    // 0x120110: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120110u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x120114: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x120114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x120118: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x120118u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12011c: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x12011cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46128u)));
    // 0x120120: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x120124: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x120124u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x120128: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x120128u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46112u)));
    // 0x12012c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12012cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x120130: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x120130u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x120134: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x120134u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x120138: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x120138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x12013c: 0x3e00008  jr          $ra
    ctx->pc = 0x12013Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12013Cu;
            // 0x120140: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1200B0u: goto label_1200b0;
            case 0x120108u: goto label_120108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120144u;
}
