#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readLine
// Address: 0x102ac0 - 0x102b10
void readLine_0x102ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readLine_0x102ac0");
#endif

    ctx->pc = 0x102ac0u;

    // 0x102ac0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x102ac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102ac4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x102ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x102ac8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x102ac8u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x102acc: 0x50c2000e  beql        $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x102ACCu;
    {
        const bool branch_taken_0x102acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x102acc) {
            ctx->pc = 0x102AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102ACCu;
            // 0x102ad0: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102B08u;
            goto label_102b08;
        }
    }
    ctx->pc = 0x102AD4u;
    // 0x102ad4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x102AD4u;
    {
        const bool branch_taken_0x102ad4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102AD4u;
            // 0x102ad8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ad4) {
            ctx->pc = 0x102B04u;
            goto label_102b04;
        }
    }
    ctx->pc = 0x102ADCu;
    // 0x102adc: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x102adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_102ae0:
    // 0x102ae0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x102AE0u;
    {
        const bool branch_taken_0x102ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102ae0) {
            ctx->pc = 0x102AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102AE0u;
            // 0x102ae4: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102AE8u;
            goto label_102ae8;
        }
    }
    ctx->pc = 0x102AE8u;
label_102ae8:
    // 0x102ae8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x102aec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x102aecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102af0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x102af0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x102af4: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x102AF4u;
    {
        const bool branch_taken_0x102af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x102AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102AF4u;
            // 0x102af8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102af4) {
            ctx->pc = 0x102B04u;
            goto label_102b04;
        }
    }
    ctx->pc = 0x102AFCu;
    // 0x102afc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102AFCu;
    {
        const bool branch_taken_0x102afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102AFCu;
            // 0x102b00: 0x2c620020  sltiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102afc) {
            ctx->pc = 0x102AE0u;
            goto label_102ae0;
        }
    }
    ctx->pc = 0x102B04u;
label_102b04:
    // 0x102b04: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x102b04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_102b08:
    // 0x102b08: 0x3e00008  jr          $ra
    ctx->pc = 0x102B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B08u;
            // 0x102b0c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102AE0u: goto label_102ae0;
            case 0x102AE8u: goto label_102ae8;
            case 0x102B04u: goto label_102b04;
            case 0x102B08u: goto label_102b08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102B10u;
}
