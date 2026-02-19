#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: avoid_vibration
// Address: 0x26af90 - 0x26b074
void avoid_vibration_0x26af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26af90u;

    // 0x26af90: 0x27bdffe0
    ctx->pc = 0x26af90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26af94: 0xffbf0010
    ctx->pc = 0x26af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26af98: 0x3c020034
    ctx->pc = 0x26af98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26af9c: 0x8c43f90c
    ctx->pc = 0x26af9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965516)));
    // 0x26afa0: 0x24020006
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x26afa4: 0x1462001b
    ctx->pc = 0x26AFA4u;
    {
        const bool branch_taken_0x26afa4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26AFA8u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26afa4) {
            ctx->pc = 0x26B014u;
            goto label_26b014;
        }
    }
    ctx->pc = 0x26AFACu;
    // 0x26afac: 0x302d
    ctx->pc = 0x26afacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26afb0: 0x3c020034
    ctx->pc = 0x26afb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26afb4: 0x244af958
    ctx->pc = 0x26afb4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294965592));
    // 0x26afb8: 0x2409000c
    ctx->pc = 0x26afb8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 12));
    // 0x26afbc: 0x3c020034
    ctx->pc = 0x26afbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26afc0: 0x2448f95c
    ctx->pc = 0x26afc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294965596));
    // 0x26afc4: 0x3c020034
    ctx->pc = 0x26afc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26afc8: 0x2447f960
    ctx->pc = 0x26afc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294965600));
    // 0x26afcc: 0x0
    ctx->pc = 0x26afccu;
    // NOP
label_26afd0:
    // 0x26afd0: 0xc92818
    ctx->pc = 0x26afd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26afd4: 0xaa2021
    ctx->pc = 0x26afd4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x26afd8: 0x24c60001
    ctx->pc = 0x26afd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x26afdc: 0xc91818
    ctx->pc = 0x26afdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26afe0: 0x6a1021
    ctx->pc = 0x26afe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x26afe4: 0xc4400000
    ctx->pc = 0x26afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26afe8: 0xe4800000
    ctx->pc = 0x26afe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26afec: 0xa82021
    ctx->pc = 0x26afecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x26aff0: 0x681021
    ctx->pc = 0x26aff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x26aff4: 0xc4400000
    ctx->pc = 0x26aff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aff8: 0xe4800000
    ctx->pc = 0x26aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26affc: 0xa72821
    ctx->pc = 0x26affcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x26b000: 0x671821
    ctx->pc = 0x26b000u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26b004: 0xc4600000
    ctx->pc = 0x26b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b008: 0x28c20006
    ctx->pc = 0x26b008u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 6));
    // 0x26b00c: 0x1440fff0
    ctx->pc = 0x26B00Cu;
    {
        const bool branch_taken_0x26b00c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26B010u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        if (branch_taken_0x26b00c) {
            ctx->pc = 0x26AFD0u;
            goto label_26afd0;
        }
    }
    ctx->pc = 0x26B014u;
label_26b014:
    // 0x26b014: 0x3c020034
    ctx->pc = 0x26b014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b018: 0x2442f958
    ctx->pc = 0x26b018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965592));
    // 0x26b01c: 0x3c060034
    ctx->pc = 0x26b01cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x26b020: 0x8cc5f90c
    ctx->pc = 0x26b020u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294965516)));
    // 0x26b024: 0x2403000c
    ctx->pc = 0x26b024u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x26b028: 0xa31818
    ctx->pc = 0x26b028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b02c: 0x622021
    ctx->pc = 0x26b02cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b030: 0xc5600000
    ctx->pc = 0x26b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b034: 0xe4800000
    ctx->pc = 0x26b034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26b038: 0x432021
    ctx->pc = 0x26b038u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b03c: 0xc5600004
    ctx->pc = 0x26b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b040: 0xe4800004
    ctx->pc = 0x26b040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x26b044: 0x80102d
    ctx->pc = 0x26b044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b048: 0xc5600008
    ctx->pc = 0x26b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b04c: 0xe4400008
    ctx->pc = 0x26b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x26b050: 0x28a20006
    ctx->pc = 0x26b050u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 6));
    // 0x26b054: 0x10400002
    ctx->pc = 0x26B054u;
    {
        const bool branch_taken_0x26b054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B058u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x26b054) {
            ctx->pc = 0x26B060u;
            goto label_26b060;
        }
    }
    ctx->pc = 0x26B05Cu;
    // 0x26b05c: 0xacc2f90c
    ctx->pc = 0x26b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294965516), GPR_U32(ctx, 2));
label_26b060:
    // 0x26b060: 0xc09abac
    ctx->pc = 0x26B060u;
    SET_GPR_U32(ctx, 31, 0x26B068u);
    ctx->pc = 0x26B064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26AEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_position_0x26aeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B068u; }
    }
    if (ctx->pc != 0x26B068u) { return; }
    ctx->pc = 0x26B068u;
    // 0x26b068: 0xdfbf0010
    ctx->pc = 0x26b068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b06c: 0x3e00008
    ctx->pc = 0x26B06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AFD0u: goto label_26afd0;
            case 0x26B014u: goto label_26b014;
            case 0x26B060u: goto label_26b060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B074u;
}
