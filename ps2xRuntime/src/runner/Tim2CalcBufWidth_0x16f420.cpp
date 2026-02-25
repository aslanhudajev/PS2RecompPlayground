#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2CalcBufWidth
// Address: 0x16f420 - 0x16f520
void Tim2CalcBufWidth_0x16f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2CalcBufWidth_0x16f420");
#endif

    ctx->pc = 0x16f420u;

    // 0x16f420: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x16f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16f424: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x16F424u;
    {
        const bool branch_taken_0x16f424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f424) {
            ctx->pc = 0x16F4E0u;
            goto label_16f4e0;
        }
    }
    ctx->pc = 0x16F42Cu;
    // 0x16f42c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16f430: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x16F430u;
    {
        const bool branch_taken_0x16f430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f430) {
            ctx->pc = 0x16F4E0u;
            goto label_16f4e0;
        }
    }
    ctx->pc = 0x16F438u;
    // 0x16f438: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x16f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x16f43c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16F43Cu;
    {
        const bool branch_taken_0x16f43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f43c) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F444u;
    // 0x16f444: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x16f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16f448: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16F448u;
    {
        const bool branch_taken_0x16f448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f448) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F450u;
    // 0x16f450: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16f454: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F454u;
    {
        const bool branch_taken_0x16f454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f454) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F45Cu;
    // 0x16f45c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f460: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16F460u;
    {
        const bool branch_taken_0x16f460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f460) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F468u;
    // 0x16f468: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x16f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x16f46c: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16F46Cu;
    {
        const bool branch_taken_0x16f46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f46c) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F474u;
    // 0x16f474: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x16f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x16f478: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16F478u;
    {
        const bool branch_taken_0x16f478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f478) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F480u;
    // 0x16f480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f484: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16F484u;
    {
        const bool branch_taken_0x16f484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f484) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F48Cu;
    // 0x16f48c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x16F48Cu;
    {
        const bool branch_taken_0x16f48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f48c) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F494u;
    // 0x16f494: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x16f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x16f498: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F498u;
    {
        const bool branch_taken_0x16f498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f498) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F4A0u;
    // 0x16f4a0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x16f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x16f4a4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F4A4u;
    {
        const bool branch_taken_0x16f4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f4a4) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F4ACu;
    // 0x16f4ac: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x16f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x16f4b0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F4B0u;
    {
        const bool branch_taken_0x16f4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f4b0) {
            ctx->pc = 0x16F4C0u;
            goto label_16f4c0;
        }
    }
    ctx->pc = 0x16F4B8u;
    // 0x16f4b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16F4B8u;
    {
        const bool branch_taken_0x16f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f4b8) {
            ctx->pc = 0x16F510u;
            goto label_16f510;
        }
    }
    ctx->pc = 0x16F4C0u;
label_16f4c0:
    // 0x16f4c0: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x16f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x16f4c4: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16F4C4u;
    {
        const bool branch_taken_0x16f4c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16F4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4C4u;
            // 0x16f4c8: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4c4) {
            ctx->pc = 0x16F518u;
            goto label_16f518;
        }
    }
    ctx->pc = 0x16F4CCu;
    // 0x16f4cc: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x16f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x16f4d0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16f4d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16F4D4u;
    {
        const bool branch_taken_0x16f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f4d4) {
            ctx->pc = 0x16F518u;
            goto label_16f518;
        }
    }
    ctx->pc = 0x16F4DCu;
    // 0x16f4dc: 0x0  nop
    ctx->pc = 0x16f4dcu;
    // NOP
label_16f4e0:
    // 0x16f4e0: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x16f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x16f4e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F4E4u;
    {
        const bool branch_taken_0x16f4e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4E4u;
            // 0x16f4e8: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4e4) {
            ctx->pc = 0x16F4F4u;
            goto label_16f4f4;
        }
    }
    ctx->pc = 0x16F4ECu;
    // 0x16f4ec: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x16f4f0: 0x22983  sra         $a1, $v0, 6
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
label_16f4f4:
    // 0x16f4f4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x16f4f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x16f4f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F4F8u;
    {
        const bool branch_taken_0x16f4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f4f8) {
            ctx->pc = 0x16F508u;
            goto label_16f508;
        }
    }
    ctx->pc = 0x16F500u;
    // 0x16f500: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16f500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16f504: 0x0  nop
    ctx->pc = 0x16f504u;
    // NOP
label_16f508:
    // 0x16f508: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F508u;
    {
        const bool branch_taken_0x16f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F508u;
            // 0x16f50c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f508) {
            ctx->pc = 0x16F518u;
            goto label_16f518;
        }
    }
    ctx->pc = 0x16F510u;
label_16f510:
    // 0x16f510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f514: 0x0  nop
    ctx->pc = 0x16f514u;
    // NOP
label_16f518:
    // 0x16f518: 0x3e00008  jr          $ra
    ctx->pc = 0x16F518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F4C0u: goto label_16f4c0;
            case 0x16F4E0u: goto label_16f4e0;
            case 0x16F4F4u: goto label_16f4f4;
            case 0x16F508u: goto label_16f508;
            case 0x16F510u: goto label_16f510;
            case 0x16F518u: goto label_16f518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F520u;
}
